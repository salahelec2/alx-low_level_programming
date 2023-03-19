#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'print all possible different combinations of three digits'
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; ++i)
	{
		for (j = i + 1; j <= 9; ++j)
		{
			for (k = j + 1; k <= 9; ++k)
			{
				if (j != i)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);
					if (i == 7 && j == 8 && k == 9)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
