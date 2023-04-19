#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of simple operations given ias arguments
 * @argc: argument count
 * @argv: argument vector or content
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *operator;
	int number1, number2;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	operator = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		return (1);
	}

	if ((*operator == '/' && number2 == 0) || (*operator == '%' && number2 == 0))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", get_op_func(operator)(number1, number2));
	return (0);
}
