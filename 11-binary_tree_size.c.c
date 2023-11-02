#include "binary_trees.h"
/**
 * get_size - give me the size of the binary tree.
 * @tree: the tree to find the size for it.
 * @size: to count the size of tree.
 * Return: return the size of the tree.
*/
int get_size(const binary_tree_t *tree, int size)
{
	if (tree)
	{
		size = get_size(tree->left, size + 1);
		size = get_size(tree->right, size + 1);
	}
	return (size);
}

/**
 * binary_tree_size - To find the binary tree.
 * @tree: the tree we need.
 * Return: return the size of the tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (get_size(tree, 0) / 2);
}
