#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 *
 * @tree: Root of the binary tree
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left = 0, right = 0;

	if (!tree)
		return (0);

	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);

	height = left > right ? left : right;

	return (height);
}


/**
 * binary_tree_balance - Measure the balance of a binary tree
 *
 * @tree: Root of the binary tree
 *
 * Return: The balance of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);
}
