#include "binary_trees.h"

/**
* binary_tree_postorder - apply ptr of function
* @tree: root of tree
* @func: pointer of function
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *tmp_tree = (binary_tree_t *)tree;

	if (!tmp_tree)
		return;

	binary_tree_postorder(tmp_tree->left, func);
	binary_tree_postorder(tmp_tree->right, func);

	func(tmp_tree->n);
}
