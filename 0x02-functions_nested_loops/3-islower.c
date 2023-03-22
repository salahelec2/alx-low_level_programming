#include "main.h"

/**
 * _islower - Return 1 if lowercase return 0 otherwise
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	int c;
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
