#include "binary_trees.h"

/**
 * find_depth - mesure tht depth from the root
 * @node: pointer to node
 * Return: the number of layers
 */

int find_depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}


/**
 * is_perfect_rec - Entry point
 * @root: binary tree root
 * @d: node find
 * @level: level of d in tree
 * Return: Always 0 (Success)
 */

int is_perfect_rec(const binary_tree_t *root, int d, int level)
{
	if (root == NULL)
		return (1);

	if (root->left == NULL && root->right == NULL)
		return (d == level + 1);

	if (root->left == NULL || root->right == NULL)
		return (0);

	return (is_perfect_rec(root->left, d, level + 1) &&
			is_perfect_rec(root->right, d, level + 1));
}


/**
* binary_tree_is_perfect - check if the tree is perfect
* @tree: root of tree
* Return: 1 is true 0 is false
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int d = 0;
	int boo;

	if (root == NULL)
		return (0);
	d = find_depth(root);

	boo = is_perfect_rec(root, d, 0);

	if (boo == 1)
		return (1);
	else
		return (0);
}
