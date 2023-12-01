#include "binary_trees.h"

/**
 * array_to_heap - Builds a tree from an array.
 * @array: pointer to the first element of  array to be converted.
 * @size: The number of element in array.
 * Return: pointer to  root node of created one, NULL failure.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int ind;
	heap_t *root = NULL;

	for (ind = 0; ind < size; ind++)
		heap_insert(&root, array[ind]);

	return (root);
}
