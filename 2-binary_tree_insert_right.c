#include "binary_trees.h"
/**
 * binary_tree_insert_right -  inserts node as the right-child of another node
 * @value: value
 * @parent: parent node
 * Return: result
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result = NULL;

	if (parent == NULL)
		return (NULL);

	result = malloc(sizeof(binary_tree_t));

	if (result != NULL)
	{
		result->parent = parent;
		result->n = value;
		result->left = NULL;
		result->right = NULL;
		if (parent->right == NULL)
			parent->right = result;
		else
		{
			result->right = parent->right;
			result->right->parent = result;
			parent->right = result;
		}
	}
	else
		return (NULL);

	return (result);
}
