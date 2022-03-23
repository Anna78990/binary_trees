#include  "binary_trees.h"

/**
* binary_tree_uncle - find uncle of node
* @node: a node of binary tree
* Return: uncle of node othertwise NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	binary_tree_t *tmp;

	if (!node || !node->parent)
		return (NULL);

	uncle = node->parent;
	tmp = node->parent;
	if (!uncle->parent)
		return (NULL);

	uncle = uncle->parent;
	if (uncle->right != tmp)
		return (uncle->right);
	else
		return (uncle->left);
}
