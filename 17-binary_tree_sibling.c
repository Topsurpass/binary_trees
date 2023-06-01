#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp_parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	/**
	 * Get the parent node
	 * Check if both children of the parent are complete
	 * if left child is picked, return right sibling
	 * otherwise left sibling
	 */
	temp_parent = node->parent;
	if (temp_parent->right && temp_parent->left)
	{
		if (temp_parent->left == node)
			return (temp_parent->right);
		else
			return (temp_parent->left);
	}
	return (NULL);
}
