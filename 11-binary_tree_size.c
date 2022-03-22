#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to tree
 * Return: size, if tree is NULL, 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
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
