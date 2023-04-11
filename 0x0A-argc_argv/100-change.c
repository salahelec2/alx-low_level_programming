#include <stdio.h>
#include <stdlib.h>

/**
 * main - teterminate number of chaange to give
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	coins += cent / 25;
	cent %= 25;
	coins += cent / 10;
	cent %= 10;
	coins += cent / 5;
	cent %= 5;
	coins += cent / 2;
	cent %= 2;
	coins += cent / 1;
	printf("%d\n", coins);
	return (0);
}
