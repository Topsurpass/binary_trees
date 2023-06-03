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

	/* Recussively count the left sub-tree */
	if (tree->left)
		count_left += binary_tree_height(tree->left);

	/* Recussively count the right sub-tree */
	if (tree->right)
		count_right += binary_tree_height(tree->right);

	/**
	 * Get the maximum value between left and right sub-tree
	 * +1 add the current node / parent with each child
	 */
	total = count_left > count_right ? count_left + 1 : count_right + 1;

	return (total);
}
/**
 * print_node_level - Print node's value at a certain level
 * @tree: Pointer to the root node
 * @level: current level
 * @func: Function that perform operation on a node
 *
 * Return: Nothing
 */
void print_node_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	/**
	 * This is the base case for the recurssion
	 * only print the value of the node when the level is 1
	 * using the function func
	 */
	if (level == 1)
		func(tree->n);

	/**
	 * Recurssively call the function with new node
	 * (left first then right) as long as level > 1
	 * For each recurrsive call, 1 is being subtracted from
	 * the level and new node is being supplied until level
	 * becomes 1 and all the current node at the level get printed.
	 */
	else if (level > 1)
	{
		print_node_level(tree->left, level - 1, func);
		print_node_level(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - It goes through a binary tree using
 * level-order traversal
 * @tree: A pointer to the root node
 * @func: The function that performs operation on a node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	height = 0, i = 1;

	/* If no tree or function */
	if (tree == NULL || func == NULL)
		return;

	/* Get the total height of the tree */
	height = binary_tree_height(tree);

	/**
	 * Move down the tree level-by-level, starting
	 * from level 1 to the last, and print each level's node value.
	 */
	while (i <= height)
	{
		print_node_level(tree, i, func);
		i++;
	}
}
