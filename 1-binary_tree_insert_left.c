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
	binary_tree_t *node;

	/* If there's no root node */
	if (parent == NULL)
		return (NULL);
	
	/* create new node to insert */
	node = binary_tree_node(parent, value);

	/* if memory allocation fails */
	if (node == NULL)
		return (NULL);

	/* If the parent node has a left child */
	if (parent->left != NULL)
		node->left = parent->left;

	/* Set parent left child to new_node */
	parent->left = node;
	return (node);
}
