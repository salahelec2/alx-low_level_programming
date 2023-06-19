#include "main.h"

/**
 * _atoi - print half
 **@s: string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int num, signP, signN, i, result, sign;

	num = 0;
	signP = 0;
	signN = 0;
	i = 0;
	result = 0;
	sign = 1;
	while (s[i] != '\0')
		{
		if (num > 0 && !(s[i] >= 48 && s[i] <= 57))
			break;
		if (s[i] == '-' && num == 0)
			signN++;
		if (s[i] == '+' && num == 0)
			signP++;
		if (s[i] >= 48 && s[i] <= 57)
		{
		num = num * 10 + (s[i] - '0');
		if (signP >= signN)
			sign = 1;
		else if (signP < signN)
			sign = -1;
		result = num * sign;
		i++;
		}
		else
			i++;
		}
	return (result);
}
