#include "binary_trees.h"
/**
 *binary_tree_balance -  measures the balance factor of a binary tree
 *@tree: pointer to the root node of tree
 *Return: (left - right)height = balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int L_height = 0, R_height = 0, height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		L_height = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		R_height = 1 + binary_tree_balance(tree->right);

	height = L_height - R_height;

	return (height);
}
