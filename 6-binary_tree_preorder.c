#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Call the function on the node */
	/* Start traversing from the root node */
	func(tree->n);

	/* After root node, traverse towards the left sub-tree */
	binary_tree_preorder(tree->left, func);

	/* After left sub-tree, traverse towards the right sub-tree */
	binary_tree_preorder(tree->right, func);
}
