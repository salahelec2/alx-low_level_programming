#include "main.h"
/**
 * create_file - create new file.
 * @filename: new file name.
 * @text_content: text to be coppied to file.
 *
 * Return: 1 if file successfuly created, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int open_func, write_func;

	if (filename == NULL)
		return (-1);
	open_func = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (open_func == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_func = write(open_func, text_content, _strlen(text_content));
		if (write_func == -1)
			return (-1);
	}
	close(open_func);
	return (1);
}

/**
 * _strlen - string length
 * @str: string
 *
 * Return: lenght of the string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}
