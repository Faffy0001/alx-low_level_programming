#include "main.h"

/**
 * _strlen: the length of the string
 * @str: pointer to a string
 * Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file:appends a text at the end of the file
 * @filename: path to file
 * @text_content: content of the file
 * Return: 1(success) or -1(failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		w = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
