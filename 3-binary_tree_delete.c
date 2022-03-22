#include <stdlib.h>
#include "binary_trees.h"


/**
* binary_tree_delete - clear binary tree
* @tree: root of tree
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);
}
