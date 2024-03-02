#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 * Return: NULL || pointer to the uncle node.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* NODE has only 2 childs / one level || No tree*/
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->parent)
	{
		/* ROOT > RIGHT */
		if (node->parent->parent->right->left == node)
			return (node->parent->parent->left);

		if (node->parent->parent->right->right == node)
			return (node->parent->parent->left);

		/* ROOT > LEFT */
		if (node->parent->parent->left->left == node)
			return (node->parent->parent->right);

		if (node->parent->parent->left->right == node)
			return (node->parent->parent->right);
	}
	return (NULL);
}
