/**
* add - function to add two integers
* sub - function to subtract an intger from another
* mul - function to multiply two integers
* div - function to divide one integer from another
* mod - funtion to carry out modulus division
* @a: integer
* @b: integer
* Return: (a + b), (a - b), (a * b), (a / b) 
*/

int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int divn(int a, int b)
{
	if (b != 0)
	{	return (a / b);
	}
	return (0);
}
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	return (0);
}
