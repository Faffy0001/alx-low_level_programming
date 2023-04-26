#include "main.h"

/**
 * a function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 on succes and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int j, strlength = 0;
	int write_n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (j = 0; text_content[j] != '\0'; j++)
		strlength++;

	write_n = write(fd, text_content, strlength);
	if (write_n == -1 || write_n != strlength)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}	
