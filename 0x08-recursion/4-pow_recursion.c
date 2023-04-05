#include "main.h"
/**
 * _pow_recursion - calculate the power of x by y.
 *
 * @x: base number
 * @y: exponent of the power
 *
 * Return: If y is lower than 0, the function return -1, or 0 if y = 0,
 * or x raised by y if y > then 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
