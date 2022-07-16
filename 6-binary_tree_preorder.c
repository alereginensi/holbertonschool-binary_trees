#include "binary_trees.h"
/**
 * binary_tree_preorder - pre-order traversal
 * @func: func
 * @tree: tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		printf("%d\n", tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
	else
		return;
}
