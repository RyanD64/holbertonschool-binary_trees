#include "binary_trees.h"

/**
 * binary_tree_balance - check if a binary tree is balanced
 * @tree: pointer to the  root node to count the number of nodes
 * Return: number of nodes otherwise 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}

/**
 * binary_tree_height - find the height of the binary tree
 * @tree: pointer to the root node
 * Return: void
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
	return (0);
}
