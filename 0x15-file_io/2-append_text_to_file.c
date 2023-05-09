#include "main.h"
/**
 * append_text_to_file - add text to the end of the file
 * @filename: File name
 * @text_content: test to add to the end of file
 *
 * Return: 1 if text_content was appened, -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_func, write_func;

	if (filename == NULL)
		return (-1);
	open_func = open(filename, O_RDWR | O_APPEND);
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
