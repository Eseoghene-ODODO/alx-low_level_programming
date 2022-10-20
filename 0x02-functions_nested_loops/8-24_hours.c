#include "main.h"

/**
 * jack_bauer - function that prints every minute from  00:00 to 23:59.
 *
 * @count: character
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
		       _putchar(minutes % 10 + '0');
		       _putchar('\n');
		}
	}
}
