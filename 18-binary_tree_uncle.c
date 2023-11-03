#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of tree.
 * @node: find the node of the tree.
 * Return: return the uncle of passed node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);


	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		if (grandparent->right)
			return (grandparent->right);
	}

	else if (grandparent->right == parent)
	{
		if (grandparent->left)
			return (grandparent->left);
	}
	else
	{
		free(parent);
		return (NULL);
	}
	return (NULL);

}
