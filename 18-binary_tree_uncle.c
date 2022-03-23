#include  "binary_trees.h"

/**
* binary_tree_uncle - find uncle of node
* @node: a node of binary tree
* Return: uncle of node othertwise NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = node->parent;
	binary_tree_t *tmp = node->parent;

	if (!node || !node->parent || !uncle->parent)
		return (NULL);

	uncle = uncle->parent;
	if (uncle->right != tmp)
	{
		if (uncle->right)
			return (uncle->right);
		return (NULL);
	}
	else
	{
		if (uncle->left)
			return (uncle->left);
		else
			return (NULL);
	}
}
