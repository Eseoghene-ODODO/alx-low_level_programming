#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: character
 *Return: 0
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;

	for (; str[i] != '\0';)
	{
		i++;
	}
	max = i;
	j = (max - 1) / 2;
	for (; j <= max;)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
