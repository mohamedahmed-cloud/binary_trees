#include "binary_trees.h"

/**
 * max - get max of x, y
 * @x: first variable
 * @y: second variable
 * Return: return the max of x,y
*/
int max(int x, int y)
{
	if (x < y)
		return (y);
	return (x);
}

/**
 * get_max_height - get max of the height.
 * @tree: the height tree to find height for it
 * Return: return the max height
*/
int get_max_height(const binary_tree_t *tree)
{
	if (tree)
		return (max(get_max_height(tree->left), get_max_height(tree->right)) + 1);

	return (0);
}



/**
 * binary_tree_balance - get the balance factor of passed tree.
 * @tree: tree to get it's balance factore
 * Return: return the balance factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	l = get_max_height(tree->left);
	r = get_max_height(tree->right);

	return (l - r);
}
