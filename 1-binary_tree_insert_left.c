#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - used to insert node in the left
 * @parent: the parent to insert node in it.
 * @value: from tlhis value we create a node and insert in the parent node.
 * Return: this function return a reference for created node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));

	if (parent == NULL || child == NULL)
	{
		free(child);
		return (NULL);
	}

	child->n = value;
	child->parent = parent;
	child->left = parent->left;
	child->right = NULL;

	parent->left = child;

	if (child->left)
		child->left->parent = child;
	return (child);
}
