#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: height, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side, right_side;

	if (!tree)
		return (0);
	else
	{
		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
	
		if (left_side >= right_side)
			return left_side + 1;
		else
			return right_side + 1;
	}
}

int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
