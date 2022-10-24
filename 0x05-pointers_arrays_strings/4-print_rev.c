#include "main.h"


/**
 * print_rev - function that prints a string, in reverse.
 * @s: character
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0';)
	{
		i++;
	}
	i--;
	for (; i >= 0;)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
