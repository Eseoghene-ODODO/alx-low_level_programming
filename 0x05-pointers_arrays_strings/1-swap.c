#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: character
 * @b: character
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
