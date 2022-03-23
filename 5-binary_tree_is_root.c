#include "binary_trees.h"


/**
* binary_tree_is_root - check if the node is a root of tree
* @node: a node of tree
* Return: 1 if is a root of tree otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);

	return (0);
}
