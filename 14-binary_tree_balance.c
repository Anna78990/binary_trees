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
		while (tree->right || tree->left)
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

int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_height(tree->right) - binary_tree_height(tree->left) + 1);
}
