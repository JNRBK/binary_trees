#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
    if (!node)
        return (0);

    if (node->left && node->left->left == NULL && node->left->right == NULL)
        return (1);

    if (node->right && node->right->left == NULL && node->right->right == NULL)
        return (1);

    if (node->left && node->left->left == NULL && node->left->right == NULL)
        return (1);

    return (0);
}
