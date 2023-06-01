#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: A pointer to the node to check
 *
 * Return: 0 (if node is not root) and 1 (if node is root)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
