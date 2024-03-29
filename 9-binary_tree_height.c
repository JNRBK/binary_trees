#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree || 0 on failure.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		/* Adding extra count because of the root node itself */
		/* The recursive call will handle all the left nodes within */
		count_left = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		/* Adding extra count because of the root node itself */
		/* The recursive call will handle all the right nodes within */
		count_right = 1 + binary_tree_height(tree->right);
	}

	/* Comparing which side is the longest */
	if (count_left < count_right)
		return (count_right);
	else
		return (count_left);
}
