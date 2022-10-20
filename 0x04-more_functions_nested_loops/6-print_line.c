#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: character
 * Return: Always 0.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
