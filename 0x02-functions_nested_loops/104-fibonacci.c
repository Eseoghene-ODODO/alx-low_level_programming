#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long sum = 0;
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long first1;
	unsigned long second1;
	unsigned long first2;
	unsigned long second2;
	unsigned long x1, x2;
	int count = 0;

	for (; count < 92; count++)
	{
		sum = first + second;
		printf("%lu, ", sum);
		first = second;
		second = sum;
	}
	first1 = first / 10000000000;
	second1 = second / 10000000000;
	first2 = first % 10000000000;
	second2 = second % 10000000000;
	for (count = 93; count < 99; count++)
	{
		x1 = first1 + second1;
		x2 = first2 + second2;
		if (first2 + second2 > 9999999999)
		{
			x1 += 1;
			x2 %= 10000000000;
		}
		printf("%lu%lu", x1, x2);
		if (count != 98)
			printf(", ");
		first1 = second1;
		first2 = second2;
		second1 = x1;
		second2 = x2;
	}
	printf("\n");
	return (0);
}
