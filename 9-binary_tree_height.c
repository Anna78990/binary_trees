#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: height, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree)
	{
		while (tree->right != NULL || tree->left != NULL)
		{
			if (tree->left)
				tree = tree->left;
			else if (tree->right)
				tree = tree->right;
			counter++;
		}
		return (counter);
	}
	return (0);
}
