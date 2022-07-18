#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: node to wich the sibling is found
 * Return: pointer to the sibling node
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	else if (node->parent->left != NULL && node->n == node->parent->right->n)
		return (node->parent->left);
	else if (node->parent->right != NULL && node->n == node->parent->left->n)
		return (node->parent->right);
	else
		return (NULL);
}
