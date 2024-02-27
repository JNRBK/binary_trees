#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = malloc(sizeof(binary_tree_t));

	if (ptr == NULL || parent == NULL)
	{
		return (NULL);
	}

	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->n = value;

	if (parent->left != NULL)
	{
		ptr->left = parent->left;
		parent = ptr;
	}
	parent->left = ptr;
	return (ptr);
}
