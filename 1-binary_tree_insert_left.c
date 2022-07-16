#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @value: value
 * @parent: parent node
 * Return: result
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result != NULL)
	{
		result->parent = parent;
		result->left = NULL;
		result->right = NULL;
		result->n = value;
		if (parent->left != NULL)
			parent->left = result;
	}
	return (result);
}
