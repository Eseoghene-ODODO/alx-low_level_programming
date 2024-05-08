#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using
 * Binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 * or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers within a specified range
 * @array: Pointer to the first element of the array
 * @start: Start index of the range
 * @end: End index of the range
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
		{
			printf(", ");
		}
	}
	printf("\n");
}
