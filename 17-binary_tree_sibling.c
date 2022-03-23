#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node
 * Return: pointer to the node of the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int n;
	binary_tree_t *parent;

	n = node->n;
	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left->n == n)
	{
		if (parent->right != NULL)
			return (parent->right);
		else
			return (NULL);
	}
	else if (parent->right->n == n)
	{
		if (parent->left != NULL)
			return (parent->left);
		else
			return (NULL);
	}
}
