
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"


struct binary_tree_s* createNode(int val)
{
	struct binary_tree_s* newNode = malloc(sizeof(struct binary_tree_s));
	newNode->n = val;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = NULL;
	return newNode;
}
struct binary_tree_s* insertLeft(struct binary_tree_s* root,int val)
{
	root->left = createNode(val);
	return root->left; 
}
struct binary_tree_s* insertRight(struct binary_tree_s* root, int val)
{
	root->right = createNode(val);
	return root->right;
}
// preorder traversal
void preorderTraversal(struct binary_tree_s* root)
{
	if (root != NULL)
	{
		printf("             %d\n", root->n);
		preorderTraversal(root->left);
		preorderTraversal(root->right);

	}
}
void inorderTraversal(struct binary_tree_s* root)
{
	if (root != NULL)
	{
		inorderTraversal(root->left);
		printf("             %d\n", root->n);
		inorderTraversal(root->right);
	}
}
void postorderTraversal(struct binary_tree_s* root)
{
	if (root != NULL)
	{
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		printf("             %d\n", root->n);
	}
}

int main(void)
{
	struct binary_tree_s* root = createNode(1);
	insertLeft(root, 2);
	insertRight(root, 3);
	printf("Preorder Traversal: \n");
	preorderTraversal(root);
	printf("InOrder Traversal: \n");
	inorderTraversal(root);
	printf("PostOrder Traversal: \n");
	postorderTraversal(root);
}