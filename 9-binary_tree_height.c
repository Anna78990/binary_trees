#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: height, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side, right_side;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side >= right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
