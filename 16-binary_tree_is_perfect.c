#include "binary_trees.h"
/**
 * _height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree || 0 on failure.
*/
size_t _height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left += _height(tree->left);
	if (tree->right)
		right += _height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 *binary_tree_is_perfect -  checks if a binary tree is perfect
 *@tree:  pointer to the root node of the tree
 *Return: 0 or 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lcount = 0, rcount = 0;

	if (!tree)
		return (0);

	lcount = _height(tree->left);
	rcount = _height(tree->right);

	if (lcount == rcount)
		return (1);
	else
		return (0);
}
