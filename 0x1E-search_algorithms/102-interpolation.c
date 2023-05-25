#include <stdio.h> /* include the header file for printf */
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or
 * -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0) /* check for invalid input */
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high) /* loop until value is found or not */
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			     (value - array[low])); /* calculate the probe position */

		if (pos >= size) /* check if position is out of range */
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n",
		       pos, array[pos]); /* print the checked value */

		if (array[pos] == value) /* check if value is found */
			return (pos);

		if (array[pos] < value) /* check if value is in the right half */
			low = pos + 1;
		else /* check if value is in the left half */
			high = pos - 1;
	}

	return (-1); /* value not found */
}
