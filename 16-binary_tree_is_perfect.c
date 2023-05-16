#include "binary_trees.h"

/**
 * binary_tree_is_full - Vérifie si un arbre binaire est complet.
 * @tree: Un pointeur vers le nœud racine de l'arbre.
 *
 * Return: 1 si l'arbre est complet, 0 sinon.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}

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
 * binary_tree_is_perfect - Check if a binary tree is perfect
 *
 * @tree: Root of the binary tree
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect;

	if (!tree || !binary_tree_is_full(tree))
		return (0);

	perfect = binary_tree_height(tree->left)
		- binary_tree_height(tree->right);

	return (perfect != 0 ? 0 : 1);
}
