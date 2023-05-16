#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance of a binary tree
 *
 * @tree: Root of the binary tree
 *
 * Return: The balance of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		right = 1 + binary_tree_balance(tree->right);

	return (left - right);
}