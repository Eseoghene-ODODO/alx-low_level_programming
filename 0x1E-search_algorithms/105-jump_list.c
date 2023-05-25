#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if value is not present in head or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    listint_t *node = list;
    size_t i;

    if (!list)
        return (NULL);

    while (node->next && node->index + 1 < size && node->n < value)
    {
        prev = node->index;
        for (i = 0; node->next && i < step; i++)
            node = node->next;
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);

    node = list;
    while (node->index < prev)
        node = node->next;

    while (node && node->index <= prev + step && node->index < size)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return (node);
        node = node->next;
    }

    return (NULL);
}
