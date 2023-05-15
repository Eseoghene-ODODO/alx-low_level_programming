#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 * or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump += step;
		if (prev >= size)
		{
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, min(jump,
		size) - 1);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(jump, size))
		{
			return (-1);
		}
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}

/**
 * min - Returns the minimum of two values
 * @a: First value
 * @b: Second value
 *
 * Return: The minimum value between a and b
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}
