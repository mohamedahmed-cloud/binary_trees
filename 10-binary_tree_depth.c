#include "binary_trees.h"

#include <stddef.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: The depth of the node or 0 if the tree is empty (NULL).
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_depth = binary_tree_depth(tree->left);
	size_t right_depth = binary_tree_depth(tree->right);

	return ((left_depth > right_depth) ? (left_depth + 1) : (right_depth + 1));
}
