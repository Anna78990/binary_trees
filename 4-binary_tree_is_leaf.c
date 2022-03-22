#include <stdlib.h>
#include "binary_trees.h"


/**
* bbinary_tree_is_leaf - check if the node is a leaf
* @node - node of tree
* Return: 1 if is a leaf otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->right && !node->left)
		return (1);

	return (0);
}
