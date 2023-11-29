#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in binary tree
 * @tree: pointer to root node of tree to count number of leaves.
 * Return: 0 if  NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree)
	{
		leaf += (!tree->left && !tree->right) ? 1 : 0;
		leaf += binary_tree_leaves(tree->left);
		leaf += binary_tree_leaves(tree->right);
	}

	return (leaf);
}
