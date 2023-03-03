#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal function
 * @tree: pointer to the root node
 * @func: pointer to function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	{
		;
	}

	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
