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
		count += 1;
		binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		count += 1;
		binary_tree_height(tree->right);
	}

	return (count);
}
