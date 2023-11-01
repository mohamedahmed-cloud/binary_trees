#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return NULL;
	}
	struct binary_tree_s* newNode = malloc(sizeof(struct binary_tree_s));
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = NULL;
	parent->parent = newNode->parent;
}