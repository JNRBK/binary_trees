#include "binary_trees.h"
/**
 *binary_tree_balance -  measures the balance factor of a binary tree
 *@tree: pointer to the root node of tree
 *Return: (left - right)height = balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int L_height = 0, R_height = 0;

	if (tree->left)
		L_height = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		R_height = binary_tree_balance(tree->right) + 1;

	return (L_height - R_height);
}
