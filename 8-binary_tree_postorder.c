#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree in post-order
 *
 * @tree: Root of the tree to traverse
 * @func: Function to call for each node
 *
 * Return: (void)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
