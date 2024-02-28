#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: number of nodes with one child at least || 0 on failure.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	if (tree->left || tree->right)
		return 1 + binary_tree_nodes(tree->left) +
	 binary_tree_nodes(tree->right);

	return (1);
}
