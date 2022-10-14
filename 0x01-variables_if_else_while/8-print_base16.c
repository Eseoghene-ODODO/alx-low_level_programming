#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: Using putchar to output base 16
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
	char hex = 0;
	char letters = 'a';

	while (letters <= 'f')
	{
		while (hex < 10)
		{
			putchar(hex % 10 + '0');
			hex++;
		}
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
