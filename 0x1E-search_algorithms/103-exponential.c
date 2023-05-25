#include <stdio.h> /* include the header file for printf */
#include "search_algos.h" /* include the header file for exponential_search */

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or
 * -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high, mid;

	if (array == NULL || size == 0) /* check for invalid input */
		return (-1);

	bound = 1; /* initialize the bound to 1 */

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2; /* double the bound */
	}

	low = bound / 2; /* set the lower bound to half of the previous bound */
	high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high) /* loop until value is found or not */
	{
		mid = (low + high) / 2; /* calculate the middle index */

		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

		if (array[mid] == value) /* check if value is found */
			return (mid);

		if (array[mid] < value) /* check if value is in the right half */
			low = mid + 1;
		else /* check if value is in the left half */
			high = mid - 1;
	}

	return (-1); /* value not found */
}
