#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));

	if (parent == NULL || child == NULL)
		return (NULL);

	child->n = value;
	child->parent = parent;
	child->left = parent->left;
	child->right = NULL;

	parent->left = child;

	if (child->left)
		child->left->parent = child;
	return (child);

	
}