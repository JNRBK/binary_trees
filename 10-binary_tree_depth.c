#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: depth of a node in a binary tree || 0 on failure.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree || !tree->parent)
		return (0);

	if (tree->parent)
	{
		count = 1 + binary_tree_depth(tree->parent);
	}
	return (count);
}
