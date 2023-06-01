#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1
 * child in a binary tree
 * @tree: A pointer to the root node of the tree to count
 * the number of nodes
 *
 * Return: Number of nodes (size_t)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left, count_right, count;

	count = 0;

	if (tree == NULL)
		return (0);

	/* If current node have at least 1 child */
	if (tree->left || tree->right)
		count = 1;

	/* recursively count node with at least 1 child in each subtree */
	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);


	return (count_left + count_right + count);
}
