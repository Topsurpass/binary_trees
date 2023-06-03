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

	/**
	 * This traverse the entire binary tree to
	 * count the number of children in each side
	 * of the node (left, right)
	 */
	count_left = binary_tree_is_full(tree->left);
	count_right = binary_tree_is_full(tree->right);

	/* Return the sum of the left, right and the current node */
	return (count_left + 1 + count_right);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 (not perfect) 1 (perfect)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count_left, count_right;

	count_left = count_right = 0;

	if (tree == NULL)
		return (0);

	/* count all nodes on both sides of the tree */
	count_left = binary_tree_is_full(tree->left);
	count_right = binary_tree_is_full(tree->right);

	/* If no of nodes on both sides are the same */
	if (count_left == count_right)
		return (1);

	return (0);
}
