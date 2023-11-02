#include "binary_trees.h"

/**
 * binary_tree_preorder - Write a function that goes through a binary
 * tree using pre-order traversal
 * @tree: binary treee to make a proorder traversal
 * @func: the pointer to print the value of node.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
