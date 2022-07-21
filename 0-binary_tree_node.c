#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new node otherwise NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	if (tmp != NULL)
	{
		if (parent != NULL)
		{
			tmp->parent = parent;
		}
		else
		{
			tmp->parent = NULL;
		}
		tmp->left = NULL;
		tmp->right = NULL;
		tmp->n = value;
	}
	return (tmp);
}
