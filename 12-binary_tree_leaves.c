#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves
 * @tree: pointer to tree
 * Return: number of leaves, if tree is NULL, 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;

	if (tree)
		return (count_leaves(temp));
	return (0);
}

/**
 * count_leaves - count the leaves
 * @tree: pointer to tree
 * Return: number of leaves
 */

int count_leaves(const binary_tree_t *tree)
{
	if (tree  == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (count_leaves(tree->left) + count_leaves(tree->right));
}
