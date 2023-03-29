#include "main.h"

/**
 * _atoi - print half
 **@s: string
 *
 * Return: integer
 */




int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (num > 0 && !(s[i] >= 48 && s[i] <= 57))
			break;
		if (s[i] >= 48 && s[i] <= 57)
			{
			if (s[i - 1] == '-' && num == 0)
				sign = -1;
			num = num * 10 + (s[i] - '0');
			i++;
			}
		else
			i++;
	}

	return (num * sign);
}
