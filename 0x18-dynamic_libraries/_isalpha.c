#include "main.h"

/**
 * _isalpha - Return 1 alpha otherwise return 0
 * @c: The variable to check
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
