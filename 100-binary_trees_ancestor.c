#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest commaon ancestor of 2 nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A ponter to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *curr_1, *curr_2;
	
	/* Declared 2 variables to loop through to their ancestor */

	curr_1 = first;
	curr_2 = second;
	if (first == NULL || second == NULL)
		return NULL;
	/**
	 * While both nodes are not the same and atleast one of them is a valid node,
	 * keep traversing.
	 * 
	 * Update curr_1 and curr_2 based on their parent nodes.
	 * If the current node is not NULL, we set the corresponding variable to its parent.
	 * If the current node is NULL, we set the corresponding variable to the other node.
	 */
	while (curr_1 != curr_2 && (curr_1 != NULL || curr_2 != NULL))
	{
		curr_1 = (curr_1 != NULL) ? curr_1->parent : second;
		curr_2 = (curr_2 != NULL) ? curr_2->parent : first;
	}

	/* If no common ancestor was found */
	if (curr_1 == NULL && curr_2 == NULL)
		return NULL;
	return (binary_tree_t *)curr_1;
}
