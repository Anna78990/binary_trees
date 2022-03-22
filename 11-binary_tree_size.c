#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to tree
 * Return: size, if tree is NULL, 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int counter = 0;
	const binary_tree_t *temp = tree;

	if (tree)
	{
		size_count(temp, &counter);
		return (counter);
	}
	return (0);
}

/**
 * size_count - size count
 * @tree: pointer to tree
 * @counter: pointer to count
 * Return: Nothing
 */

void size_count(const binary_tree_t *tree, int *counter)
{
	if (tree == NULL)
		return;
	*counter += 1;
	size_count(tree->left, counter);
	size_count(tree->right, counter);
}
