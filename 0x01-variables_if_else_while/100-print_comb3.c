#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'Write a program that prints all possible different combinations of three digits without repitition'
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = i + 1; j <= 9; ++j)
		{
			if (j != i)
                {
				putchar(48 + i);
				putchar(48 + j);
				if (i == 8 && j == 9) continue;
				putchar(44);
				putchar(32);
		}
		}
	}
	putchar(10);
	return (0);
}
