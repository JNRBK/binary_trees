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
 *binary_tree_balance -  measures the balance factor of a binary tree
 *@tree: pointer to the root node of tree
 *Return: (left - right)height = balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t L_height = 0, R_height = 0;

	if (!tree)
		return (0);

	L_height = _height(tree->left);
	R_height = _height(tree->right);

	return (L_height - R_height);

}
