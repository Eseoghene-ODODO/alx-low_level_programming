/**
 * add - function to add two integers a and b
 * @a: integer value
 * @b: integer value
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function that subtracts value b from value a
 * @a: integer value
 * @b: integer value
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function that multiplies two integers a and b
 * @a: integer value
 * @b: integer value
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function that divides two integers a and b
 * @a: integer value
 * @b: integer value
 * Return: a / b
 */
int div(int a, int b)
{
	if (b != 0)
	{	return (a / b);
	}
	return (0);
}

/**
 * mod - function that outputs the remainder of a division
 * of two integers a and b
 * @a: integer value
 * @b: integer value
 * Return: a % b
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	return (0);
}
