#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenate arguments
 *
 * @ac: argc or argument count
 * @av: argv or argument vector
 *
 * Return: pointer to a string or NULL if av/ac are null or program fail
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, point;
	char *str;

	point = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[point] = av[i][j];
			point++;
		}
		str[point] = '\n';
		point++;
	}
	str[point] = '\0';
	return (str);
}

