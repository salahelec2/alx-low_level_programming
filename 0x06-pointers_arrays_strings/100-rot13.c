#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a sting into rot13 encription
 * @str: The string in question
 * Return: str encoded rot13
 */

char *rot13(char *str)
{
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(str + i) == let[j])
			{
				*(str + i) = rot[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
