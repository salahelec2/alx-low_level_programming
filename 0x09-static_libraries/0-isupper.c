#include "main.h"

/**
 * _isupper - tell if a char is UPPER
 * @c: charater
 *
 * Return: 1 if UPPER 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
