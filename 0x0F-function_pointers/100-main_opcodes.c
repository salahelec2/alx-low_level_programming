#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the opcode of it's main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exit with 1 or 2 status on failure
 */

int main(int argc, char *argv[])
{
	int indexOf, bytes;
	unsigned char code;
	int (*theMain)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (indexOf = 0; indexOf < bytes; indexOf++)
	{
		code = *(unsigned char *)theMain;
		printf("%.2x", code);

		if (indexOf == bytes - 1)
			continue;
		printf(" ");
		theMain++;
	}
	printf("\n");
	return (0);
}
