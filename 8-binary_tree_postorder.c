#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using postorder traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Start traversing from the left sub-tree node */
	binary_tree_postorder(tree->left, func);

	/* After the left sub-tree, traverse towards the right sub-tree */
	binary_tree_postorder(tree->right, func);

	/* Call the function on the node */
	/* After the right sub-tree node, traverse the root node */
	func(tree->n);

}
