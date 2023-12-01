#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of binary tree.
 * @tree: A pointer to  root node of tree to measure  balance factor.
 * Return: 0 if NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of  binary tree.
 * @tree: A pointer to root node of tree to measure  height.
 * Return: 0 if NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lefts = 0, rightss = 0;

		lefts = tree->lefts ? 1 + binary_tree_height(tree->left) : 1;
		rights = tree->rights ? 1 + binary_tree_height(tree->right) : 1;

		return ((lefts > rights) ? lefts : rights);
	}

	return (0);
}
