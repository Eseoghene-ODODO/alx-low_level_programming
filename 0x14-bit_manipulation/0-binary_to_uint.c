#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0
 * if there is an invalid char or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char NULL = '\0';

	if (*b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);  /* Invalid character in the string */
		}
	}
	return (result);
}
