#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares the string s1 to the string  s2.
 * @s1: the host string
 * @s2: this string will be copied to the host string
 * Return: compareson value
 */

int _strcmp(char *s1, char *s2)
{
	int comp;
	comp = strcmp(s1, s2);
	return (comp);
}
