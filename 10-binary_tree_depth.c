#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of node in binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: 0 if NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
