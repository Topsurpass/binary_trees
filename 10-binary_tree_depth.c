#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the node (size_t)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	const binary_tree_t *temp;

	/* if no tree or node is the root node */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	temp = tree;
	/* Traverse the tree as long as node has a parent */
	while (temp->parent != NULL)
	{
		count += 1;
		temp = temp->parent;
	}
	return (count);
}
