#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf or not
 * @node: A pointer to the node to check
 *
 * Return: 0 (if not a leaf) and 1 (if node is a leaf)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
