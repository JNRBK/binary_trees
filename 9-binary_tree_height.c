#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree || 0 on failure.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		binary_tree_height(tree->left);
		count += 1;
	}

	if (tree->right)
	{
		binary_tree_height(tree->right);
		count += 1;
	}

	return (count);
}
