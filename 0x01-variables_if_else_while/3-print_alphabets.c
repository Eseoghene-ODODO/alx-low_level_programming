#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: Using putchar to output A-Z, a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ca = 'a';
	char cA = 'A';

	while (cA <= 'Z')
	{
		while (ca <= 'z')
		{
			putchar(ca);
			ca++;
		}
		putchar(cA);
		cA++;
	}
	putchar('\n');
	return (0);
}
