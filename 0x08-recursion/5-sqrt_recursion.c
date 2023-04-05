#include "main.h"

/**
 * sqrt_calculator - calculate the sqrt of a given number
 * @x: the number to calculate sqrt
 * @y: next number to test
 *
 * Return: This is the result
 */
int sqrt_calculator(int x, int y)
{
	int temp;

	temp = (y + x / y) / 2.0;
	if (temp == y)
	{
		if (x % y)
			return (-1);
		return (y);
	}
	else
	{
	return (sqrt_calculator(x, temp));
	}
}

/**
 * _sqrt_recursion - calculate sqrt using recurtion
 *
 * @n: number to be calculated
 *
 * Return: sqrt of n if the result is natural otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_calculator(n, 1.0));
}
