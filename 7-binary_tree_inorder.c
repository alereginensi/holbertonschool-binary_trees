#include "binary_trees.h"
/**
 * binary_tree_inorder - in-order traversal
 * @func: func
 * @tree: tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		printf("%d\n", tree->n);
		binary_tree_inorder(tree->right, func);
	}
	else
		return;
}