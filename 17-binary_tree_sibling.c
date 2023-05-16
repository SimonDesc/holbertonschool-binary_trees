#include "binary_trees.h"

/**
 * binary_tree_sibling - cherche le frère d'un nœud dans un arbre binaire
 * @node: Pointeur vers le nœud dont on recherche le frère
 *
 * Return: Pointeur vers le frère du nœud, ou NULL s'il n'a pas de frère
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		return (parent->right);

	else if (parent->right == node)
		return (parent->left);

	else
		return (NULL);
}
