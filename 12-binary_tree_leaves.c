#include "binary_trees.h"
/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to root of the tree
 *Return: (0)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (2);

	if (tree->left || tree->right)
		return (1);

	if (tree->parent && !tree->right && !tree->left)
		return (1);

	return (0);
}
