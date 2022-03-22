#include "binary_trees.h"

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
	else
	{
		if (parent->left != NULL)
			return (parent->left);
		else
			return (NULL);
	}
}
