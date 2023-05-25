#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or if
 *         the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t min = 0;
    size_t max;
    size_t i, j;

    if (array == NULL)
        return -1;

    if (size == 0)
    {
        printf("Searching in array: \n");
        return -1;
    }

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        min = bound;
        bound *= 2;
    }

    max = (bound < size - 1) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", min, max);

    for (i = min; i <= max; i++)
    {
        printf("Searching in array: ");

        for (j = min; j <= max; j++)
        {
            printf("%d", array[j]);
            if (j < max)
                printf(", ");
        }

        printf("\n");

        if (array[i] == value)
        {
            printf("Found %d at index: %lu\n", value, i);
            return i;
        }
    }

    printf("Found %d at index: -1\n", value);
    return -1;
}
