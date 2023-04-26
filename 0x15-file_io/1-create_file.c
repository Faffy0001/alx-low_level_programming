#include "main.h"

/**
 * a function the creates a file
 * @filename: is the name of the file to create 
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, ret_write;
	size_t strlength = 0;

	id (filename == NULL)
		return (-1);

	fd = open(filename, 0_WRONLY | 0_CREAT | 0_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[strlenght])
		strlength++;

	ret_write = write(fd, text_content, strlength);
	if (ret_write == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
