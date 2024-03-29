#include "main.h"

/**
 * _strlen: the length of a string
 * @str: pointer to the string
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
 * create_file: creates a file
 * @filename: name of the file to create 
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 (success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		w = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
