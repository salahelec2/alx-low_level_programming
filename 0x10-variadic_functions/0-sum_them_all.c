#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function that return the sum of its parameter
 *
 * @n: number of parameters
 *
 * Return: sum of all parameters or 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int c;
	int sum;

	sum = 0;
	va_start(args, n);

	for (c = 0; c < n; c++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
