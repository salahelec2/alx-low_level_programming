#include "main.h"

/**
 * factorial - calculate the factorial of number n.
 *
 * @n: the number
 *
 * Return: result
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
