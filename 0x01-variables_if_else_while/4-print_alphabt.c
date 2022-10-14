#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Description: loop to eliminate q and e from a-z.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
