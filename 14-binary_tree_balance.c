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

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side >= right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}


/**
* binary_tree_balance - check the balance of the tree
* @tree: root of the tree
* Return: The value of the balance into 2 branch
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
