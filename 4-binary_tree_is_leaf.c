#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: pointer to the node
 *
 * Return: If the node is leaf or not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && (!node->left && !node->right));
}
