#include "binary_trees.h"

/**
 * get_max - return max value.
 * @a: 1st value
 * @b: 2nd value
 * Return: return the max of two value.
*/
int get_max(int a, int b)
{
	if (a < b)
		return (b);

	return (a);
}

/**
 * get_height - function to get the height.
 * @tree: tree to find height for it.
 * @max: to find max element
 * @initial: the initial value.
 * Return: return the max height
*/
int get_height(const binary_tree_t *tree, int initial, int max)
{

	if (tree)
	{

		max = get_height(tree->left, initial + 1, max);
		max = get_height(tree->right, initial + 1, max);
		max = get_max(max, initial);
	}
	return (max);
}

/**
 * binary_tree_height - Write a function that measures
 * the height of a binary tree
 * @tree: the tree to get it's size.
 * Return: return the size of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int max = -1;

	return (get_height(tree, 0, max));
}
