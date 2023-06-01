#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using inorder traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Start traversing from the left sub-tree node */
	binary_tree_inorder(tree->left, func);

	/* Call the function on the node */
	/* After the left sub-tree node, traverse the root node */
	func(tree->n);

	/* After the root node, traverse towards the right sub-tree */
	binary_tree_inorder(tree->right, func);
}
