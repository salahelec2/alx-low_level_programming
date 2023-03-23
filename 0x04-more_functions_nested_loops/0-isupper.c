#include "main.h"

/**
 * _isupper - define if a character is uppercase
 *
 * Description: Prints the alphabet with _putchar
 * @c: charater
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
