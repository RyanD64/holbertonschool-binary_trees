#include "binary_trees.h"

/**
 * binary_tree_leaves - find the size of the binary tree
 * @tree: pointer to the  root node to measure the size
 * Return: size otherwise 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
