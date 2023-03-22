#include "main.h"
#include <math.h>
/**
 * _abs - return abolute value
 * @n: The number to check
 *
 * Return: absolute of n
 */
int _abs(int n)
{	
	int abs;

	if (n < 0)
	{
		abs = n * -1;
		return (abs);
	}
	else 
		return (n);
}
