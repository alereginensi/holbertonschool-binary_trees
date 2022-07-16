#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: Node to check
 * Return: 0 or 1
**/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);

}
