#include "binary_trees.h"

/**
 *  binary_tree_is_perfect - checks if a binary tree is perfect
 *  @tree: tree
 *  Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_s, right_s;

	if (tree == NULL)
		return (0);

	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);

	if (left_s == right_s)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	}
}
