#include "main.h"

/**
 * prime_calculator - determinate if a number is prime
 *
 * @n: number to check
 * @d: devider
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int prime_calculator(int n, int d)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % d == 0)
	{
		return (0);
	}
	if (d * d > n)
	{
		return (1);
	}
	return (prime_calculator(n, d + 1));
}

/**
 * is_prime_number - determinate if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (prime_calculator(n, 2));
}
