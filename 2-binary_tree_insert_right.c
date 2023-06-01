#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of
 * another node
 * @parent:  A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: The new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/* If there's no root node */
	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	/* if memory allocation fails */
	if (node == NULL)
		return (NULL);

	/* If the parent node has a right child */
	if (parent->right != NULL)
		node->right = parent->right;

	/* Set parent right child to new_node */
	parent->right = node;
	return (node);
}
