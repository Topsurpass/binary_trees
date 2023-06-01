#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number
 * of leaves
 *
 * Return: Number of leabes in a tree (size_t)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left, count_right;

	if (tree == NULL)
		return (0);

	/**
	 * Recurssively check if a node does not have children
	 * i.e is a leaf. Return 1 if leaf
	 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);

	return (count_left + count_right);
}
