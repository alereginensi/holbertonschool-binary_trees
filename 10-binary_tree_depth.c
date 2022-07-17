#include "binary_trees.h"
/**
 * binary_tree_depth - calculates depth
 * @tree: tree
 * Return: depth or 0
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	size_t depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
