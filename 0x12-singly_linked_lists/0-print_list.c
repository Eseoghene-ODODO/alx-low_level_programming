#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
			h = h->next;
			++size;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++size;
	}
	return (size);
}
