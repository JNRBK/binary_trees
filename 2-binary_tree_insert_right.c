#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of another node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: ptr to created node || NULL on failure.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
