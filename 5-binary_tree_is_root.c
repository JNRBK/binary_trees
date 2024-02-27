#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root.
 * @node: pointer to the node to check
 * Return: 1 || 0 on failure.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right && !node->parent)
		return (1);

	if (node->right != NULL && node->left != NULL)
		return (1);
	else
		return (0);
	return (0);
}
