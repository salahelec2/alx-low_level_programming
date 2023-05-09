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
	int read, counter, open;
	char *buf_letters;

	if (filename == NULL)
		return (0);
	open = open(filename, O_RDONLY);
	if (open == -1)
		return (0);
	buf_letters = malloc(sizeof(char) * letters);
	if (buf_letters == NULL)
		return (0);
	read = read(open, buf_letters, letters);
	if (read == -1)
	{
		free(buf_letters);
		return (0);
	}
	counter = write(STDOUT_FILENO, buf_letters, read);
	if (counter == -1)
	{
		free(buf_letters);
		return (0);
	}
	close(open);
	free(buf_letters);
	return (counter);
}
