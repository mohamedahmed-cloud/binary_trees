#include "binary_trees.h"
/**
 * binary_tree_sibling - Write a function that finds the sibling of a node
 * @node: the node we will
 * Return: return the subling of the tree
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent)
	{
		if (parent->left && parent->left->n == node->n)
		{
			if (parent->right)
				return (parent->right);
		}

		else if (parent->right && parent->right->n == node->n)
		{
			if (parent->left)
				return (parent->left);
		}
		else
		{
			free(parent);
			return (NULL);
		}
	}
	return (NULL);
}
