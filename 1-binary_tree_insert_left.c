#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - add the node into left
 * @parent: pointer to parent
 * @value: value
 * Return: a pointer to the created node, or NULL on failur
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *left;
	int left_number;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	if (parent)
	{
		if (parent->left)
		{
			left = parent->left;
			left_number = left->n;
			left->n = value;
			new->n = left_number;
			left->left = new;
			new->parent = left;
		}
		else
		{
			new->parent = parent;
			parent->left = new;
		}
	}
	else
		return (NULL);
	while (new->parent != NULL)
		new = new->parent;

	return (new);
}
