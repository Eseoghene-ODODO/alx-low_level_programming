#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	duplicate = malloc(sizeof(char) * (len));

	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));
	for (index = 0; str[index]; index++)
	{
		duplicate[index] = str[index];
	}
	duplicate[len] = '\0';
	return (duplicate);
}
