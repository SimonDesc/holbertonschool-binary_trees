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
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
