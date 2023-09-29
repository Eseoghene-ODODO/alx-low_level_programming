#include <stdio.h>

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int mul_2(int a, int b)
{
	return (a * b);
}

int main(void)
{
	int k;

	int c = 5;
	int d = 2;
	
	k =mul_2(c, d);
	printf("%d\n", k);
	return (0);
}
