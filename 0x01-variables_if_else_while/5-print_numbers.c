#include <stdio.h>
#include <stdlib.h>

/**
 * manin - Entry Point
 *
 * Description: loop to print out base 10.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
