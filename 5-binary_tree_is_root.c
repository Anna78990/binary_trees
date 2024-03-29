#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to node
 * Return: 1 if the node is root, 0 if the node is NULL or not root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
		return (0);
	}
	return (0);
}
