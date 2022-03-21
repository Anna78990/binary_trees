#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	if (parent)
	{
		if (parent->n < value)
			parent->right = new;
		else
			parent->left = new;
	}
	return (new);
}
