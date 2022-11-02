#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: pointer
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	_putchar('\n');
}
