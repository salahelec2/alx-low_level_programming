#include <stdio.h>
#include <stdlib.h>

/**
 * main - to multiply two number
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc - 1 == 0 || argc - 1 == 1 || argc - 1 > 2) 
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		result = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		printf("%d\n", result);
	}
	return (0);
}
