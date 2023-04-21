#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_all - print everythins passed in parameter
 *
 * @format: formating text to be used
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int f;

	f = 0;
	va_start(args, format);
	while (format != NULL && format[f] != '\0')
	{
		switch (format[f])
		{
		case 'c':
			printf("%c", (char)va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if ((format[f] == 'c' || format[f] == 'i' || format[f] == 'f' ||
			 format[f] == 's') &&
			format[(f + 1)] != '\0')
			printf(", ");
		f++;
	}
	printf("\n");
	va_end(args);
}
