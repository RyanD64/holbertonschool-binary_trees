#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child
 * @tree: pointer to the  root node to count the number of nodes
 * Return: number of nodes otherwise 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);

	if (tree->left != NULL)
		return (binary_tree_nodes(tree->left) + 1);
	else if (tree->right != NULL)
		return (binary_tree_nodes(tree->right) + 1);

	return (0);
}
