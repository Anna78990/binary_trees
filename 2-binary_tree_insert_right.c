#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - add the node into right
 * @parent: pointer to parent
 * @value: value
 * Return: a pointer to the created node, or NULL on failur
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *right;
	int right_number;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	if (parent->right)
	{
		right = parent->right;
		right_number = right->n;
		right->n = value;
		new->n = right_number;
		right->right = new;
		new->parent = right;
	}
	else	
	{
		new->parent = parent;
		parent->right = new;
	}
	while (new->parent != NULL)
		new = new->parent;

	return (new);
}
