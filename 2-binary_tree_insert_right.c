#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert in right
 * @parent: the parent of inserted node
 * @value: the value to insert in parent node.
 * Return: null if failed esle return reference for inserted node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));

	if (!child || !parent)
		return (NULL);

	child->n = value;
	child->right = parent->right;
	child->parent = parent;
	child->left = NULL;
	parent->right = child;

	if (child->right)
		child->right->parent = child;

	return (child);
}
