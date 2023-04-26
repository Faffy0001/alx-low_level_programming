#include "main.h"

/**
 * a function the creates a file
 * @filename: is the name of the file to create 
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	char *buffer;
	int fd, i, strlength = 0;
	int ret_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		strlength++;

	buffer = malloc(sizeof(char) * strlength + 1);
	if (buffer == NULL)
		return (-1);
	buffer = text_content;

	ret_write = write(fd, buffer, strlength);
	if (ret_write == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
