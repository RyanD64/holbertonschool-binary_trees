#include "binary_trees.h"

/**
 * binary_tree_depth - find the height of the binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (depth);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
