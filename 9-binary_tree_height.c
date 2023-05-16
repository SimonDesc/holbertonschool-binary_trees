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
