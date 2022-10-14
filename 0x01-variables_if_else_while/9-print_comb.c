#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: Using puchar to output 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num % 10 + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
