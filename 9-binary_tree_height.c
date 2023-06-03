#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree (int)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left, count_right, total;

	count_left = count_right = 0;

	if (tree == NULL)
		return (0);

	/* Recussively count the left sub-tree + parent node */
	if (tree->left)
		count_left = 1 + binary_tree_height(tree->left);

	/* Recussively count the right sub-tree + parent node*/
	if (tree->right)
		count_right = 1 + binary_tree_height(tree->right);

	/**
	 * Get the maximum value between left and right sub-tree
	 */
	total = count_left > count_right ? count_left : count_right;

	return (total);
}
