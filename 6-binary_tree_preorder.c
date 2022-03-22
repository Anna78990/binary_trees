#include "binary_trees.h"

/**
* binary_tree_preorder - apply ptr of function
* @tree: root of tree
* @func: pointer of function
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *tmp_tree = (binary_tree_t *)tree;

	if (!tmp_tree)
		return;

	func(tmp_tree->n);

	binary_tree_preorder(tmp_tree->left, func);
	binary_tree_preorder(tmp_tree->right, func);
}
