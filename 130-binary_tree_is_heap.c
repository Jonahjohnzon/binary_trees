#include "binary_trees.h"

int binary_tree_is_heap(const binary_tree_t *tree);
int check_parent(const binary_tree_t *tree);
int binary_tree_is_complete(const binary_tree_t *tree);
int tree_is_complete(const binary_tree_t *tree, int i, int cnodes);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_heap - Checks if binary tree is valid Max Binary Heap.
 * @tree: A pointer to root node of tree to check.
 * Return: 1 if tree is valid Max Binary Heap, 0 otherwise.
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!binary_tree_is_complete(tree))
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}

/**
 * check_parent - Checks if parent has greater value than childs.
 * @tree: A pointer to node.
 * Return: 1 if parent has a greater, 0 otherwise
 */
int check_parent(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->n > tree->parent->n)
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}

/**
 * binary_tree_is_complete - Calls tree_is_complete function.
 * @tree: root.
 * Return: 1 if tree complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t cnod;

	if (tree == NULL)
		return (0);

	cnod = binary_tree_size(tree);

	return (tree_is_complete(tree, 0, cnod));
}

/**
 * tree_is_complete - Checks if tree complete.
 * @tree: Pointer the tree root.
 * @i: Node index.
 * @cnodes: Number nodes.
 * Return: 1 if tree complete, 0 otherwise
 */
int tree_is_complete(const binary_tree_t *tree, int i, int cnodes)
{
	if (tree == NULL)
		return (1);

	if (i >= cnodes)
		return (0);

	return (tree_is_complete(tree->left, (2 * i) + 1, cnodes) &&
		tree_is_complete(tree->right, (2 * i) + 2, cnodes));
}

/**
 * binary_tree_size - Measures the size of binary tree.
 * @tree: root.
 * Return:  0 if tree NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
