#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings -  print strings separated by specified separator
 *		followed by new line.
 *
 * @separator: wanted separator
 * @n: number of inputs
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int c;

	va_start(args, n);
	for (c = 0; c < n; c++)
	{
		char *s;

		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && c != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
