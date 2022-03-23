#include "binary_trees.h"

/**
* binary_tree_nodes - count number of nodes with at least 1
* child in a binary tree
* @tree: binary tree root
* Return: number of node in tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (!tree)
		return (0);

	left_side = binary_tree_nodes(tree->left);
	right_side = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (left_side + right_side + 1);
	return (0);
}
