#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a linked list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
