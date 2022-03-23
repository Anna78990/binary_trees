#include "binary_trees.h"

/**
 * binary_tree_insert_left - add the node into left
 * @parent: pointer to parent
 * @value: value
 * Return: a pointer to the created node, or NULL on failur
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);

	return (0);
}
