#include "binary_trees.h"

/**
 * print_tree - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 * @space: Spacing for each level of the tree
 * @height: Height of the tree
 */
static void print_tree(const binary_tree_t *tree, int space, int height)
{
	int i;

	if (tree == NULL)
		return;

	space += height;

	print_tree(tree->right, space, height);

	for (i = height; i < space; i++)
		printf(" ");

	printf("%d\n", tree->n);

	print_tree(tree->left, space, height);
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return;

	height = binary_tree_height(tree);

	print_tree(tree, 0, height);
}
