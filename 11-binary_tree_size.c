#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of a binary tree (size_t)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_left, count_right, count;

	count_left = count_right = 0;

	if (tree == NULL)
		return (0);

	/* count the children of the current node */
	count_left = binary_tree_size(tree->left);
	count_right = binary_tree_size(tree->right);

	/**
	 * +1 adds the current node with the summation of
	 * its children
	 */
	count = count_left + count_right + 1;

	return (count);
}
