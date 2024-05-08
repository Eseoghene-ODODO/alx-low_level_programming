#include <stdio.h>
#include "search.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if value is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list;
	skiplist_t *prev;

	if (!list)
		return (NULL);

	while (node->express)
	{
		prev = node;
		node = node->express;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n >= value)
			break;
	}

	if (!node->express)
	{
		prev = node;
		while (node->next)
			node = node->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, node->index);

	node = prev;
	while (node && node->index <= prev->express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
