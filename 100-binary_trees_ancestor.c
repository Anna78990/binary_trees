#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to tree
 * Return: depth, if tree is NULL, 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree)
	{
		while (tree->parent)
		{
			tree = tree->parent;
			counter++;
		}
		return (counter);
	}
	return (0);
}

/**
* binary_trees_ancestor - find the lowest common ancestor
* @first: node of binary tree
* @second: node of binary_tree
* Return: return the lowest common acestor or NULL
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	int size_n1, size_n2;
	binary_tree_t *n_fp;
	binary_tree_t *n_sp;

	if (!first || !second || !first->parent || !second->parent)
		return (NULL);

	size_n1 = binary_tree_depth(first);
	size_n2 = binary_tree_depth(second);

	if (binary_tree_depth(first) >= binary_tree_depth(second))
	{
		n_fp = (binary_tree_t *)first;
		n_sp = (binary_tree_t *)second;
	}
	else
	{
		n_fp = (binary_tree_t *)second;
		n_sp = (binary_tree_t *)first;
	}
	while (n_fp)
	{
		if (size_n1 >= size_n2)
			n_sp = (binary_tree_t *)second;
		else
			n_sp = (binary_tree_t *)first;
		while (n_sp)
		{
			if (n_sp == n_fp)
			{
				return (n_fp);
			}
			n_sp = n_sp->parent;
		}
		n_fp = n_fp->parent;
	}
	return (NULL);
}
