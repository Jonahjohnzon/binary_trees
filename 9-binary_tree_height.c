#include  "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l_height, r_height;

if (tree == NULL)
{
return (0);
}

if (tree)

l_height = binary_tree_height(tree->left);
r_height = binary_tree_height(tree->right);

if (l_height < r_height)
return (r_height + 1);
else
return (l_height + 1);
}

