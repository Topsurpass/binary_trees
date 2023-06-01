#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 (not full) 1 (full)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int count_left, count_right;

	count_left = count_right = 0;

	if (tree == NULL)
		return (0);

	/* check if node is a leaf or with no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* check if both node children are complete */
	if (tree->left != NULL && tree->right != NULL)
	{
		count_left = 1 + binary_tree_is_full(tree->left);
		count_right = 1 + binary_tree_is_full(tree->right);

		if (count_right == 1 && count_right != 0 && count_left != 0)
			return (1);

		return (0);
	}
	return (0);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 (not perfect) 1 (perfect)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	count = binary_tree_is_full(tree);
	if (count != 0)
		return (1);

	return (0);
}
