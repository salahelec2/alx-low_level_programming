#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <=59; minute++)
		{
			if (hour < 9)
				{
				_putchar(48);
				_putchar(48 + hour);
				_putchar(58);
				}
			else if (hour > 9)
				{
				_putchar(hour / 10 + 48);
				_putchar(hour % 10 + 48);
				}
			if (minute < 9)
				{
				_putchar(48);
				_putchar(48 + minute);
				_putchar(58);	
				}
			else if (minute > 9)
				{
				_putchar(minute / 10 +48);
				_putchar(minute % 10 + 48);
				}
		}
	}
}
