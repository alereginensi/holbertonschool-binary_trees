#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node
 * Return: if node is NULL, return NULL, If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (binary_tree_sibling(node->parent) == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: node to wich the sibling is found
 * Return: pointer to the sibling node
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	else if (node->parent->left == node && node->parent->right != NULL)
	{
		sibling = node->parent->right;
		return (sibling);
	}
	else if (node->parent->right == node && node->parent->left != NULL)
	{
		sibling = node->parent->left;
		return (sibling);
	}
	return (NULL);
}
