#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, time;

	for (time = 0; time < 10; time++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n <= 9)
				_putchar(n + 48);
			else if (n > 9)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
		}
		_putchar(10);
	}
}
