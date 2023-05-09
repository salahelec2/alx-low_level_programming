#include "main.h"
/**
 * read_textfile - read text based file.
 * @filename: file name to open
 * @letters: number of letters to print to STDOUT.
 *
 * Return: printed letters count.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufferLet;
	int read_func, counts, open_func;

	if (filename == NULL)
		return (0);
	open_func = open(filename, O_RDONLY);
	if (open_func == -1)
		return (0);
	bufferLet = malloc(sizeof(char) * letters);
	if (bufferLet == NULL)
		return (0);
	read_func = read(open_func, bufferLet, letters);
	if (read_func == -1)
	{
		free(bufferLet);
		return (0);
	}
	counts = write(STDOUT_FILENO, bufferLet, read_func);
	if (counts == -1)
	{
		free(bufferLet);
		return (0);
	}
	close(open_func);
	free(bufferLet);
	return (counts);
}
