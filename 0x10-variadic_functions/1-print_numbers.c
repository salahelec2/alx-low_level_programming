#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by new line
 *
 * @separator: desired separator
 * @n: number of inputs
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int c;

	va_start(args, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (separator != NULL && c != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
