#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* Base case for the recurssion */
	if (tree == NULL)
		return;

	/* Recurssively delete all the tree children */
	/* First delete all the left then all the right children*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
