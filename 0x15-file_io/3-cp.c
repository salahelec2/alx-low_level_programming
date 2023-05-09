#include "main.h"
#include <stdio.h>
#define BUF_SIZE 1024
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector or arguments value.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int input_desc, output_desc, read_Byte, write_Byte;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input_desc = open(argv[1], O_RDONLY);
	if (input_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	output_desc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_Byte = read(input_desc, text, BUF_SIZE)) > 0)
	{
		write_Byte = write(output_desc, text, read_Byte);
		if (write_Byte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			exit(99);
		}
	}
	if (read_Byte == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	close_file(input_desc);
	close_file(output_desc);
	return (0);
}

/**
 * close_file - close a opened file
 * @desc: file descriptor.
 *
 * Return_ nothing.
 */
void close_file(int desc)
{
	if (close(desc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", desc);
		exit(100);
	}
}
