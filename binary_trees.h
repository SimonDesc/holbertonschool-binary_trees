#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Structure for a binary tree node */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function to print a binary tree */
void binary_tree_print(const binary_tree_t *tree);

/* Function to create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */

