#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @value: value
 * @parent: parent node
 * Return: result
**/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result != NULL)
	{
		result->parent = parent;
		result->right = NULL;
		result->left = NULL;
		result->n = value;
	}
	else
	{
		return (NULL);
	}
	return (result);
}
