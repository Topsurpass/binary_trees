#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left-child of
 * another node
 * @parent:  A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: The new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *old_left_node = NULL;

	/* If there's no root node */
	if (parent == NULL)
		return (NULL);

	/* create new node to insert */
	node = binary_tree_node(parent, value);

	/* if memory allocation fails */
	if (node == NULL)
		return (NULL);

	/**
	 * Get the value of former left node in new variable
	 * update the former left node with the new node
	 * if former left node is not null, set the new node
	 * as the parent of the old left node
	 */
	old_left_node = parent->left;
	parent->left = node;

	if (old_left_node != NULL)
	{
		old_left_node->parent = node;
		node->left = old_left_node;
	}

	/* Set parent left child to new_node */
	return (node);
}
