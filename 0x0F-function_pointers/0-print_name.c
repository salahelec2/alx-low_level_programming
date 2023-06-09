#include "function_pointers.h"

/**
 * print_name - this function prints a name
 *
 * @name: name string
 * @f: pointer to a function that prints a name
 *
 * Return : void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
