#include  "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lefts = 0, rights = 0;

		lefts = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rights = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((lefts > rights) ? lefts : rights);
	}

	return (0);
}
