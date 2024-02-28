#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree || 0 on failure.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		count_left += 1;
		binary_tree_height(tree->left);
		{
			if (tree->left->right)
			{
				count_left += 1;
				binary_tree_height(tree->left->right);
			}
		}
	}
	if (tree->right)
	{
		count_right += 1;
		binary_tree_height(tree->right);
		{
			if (tree->right->left)
			{
				count_right += 1;
				binary_tree_height(tree->right->left);
			}
		}
	}
	if (count_left < count_right)
		return (count_right);
	else
		return (count_left);
}
