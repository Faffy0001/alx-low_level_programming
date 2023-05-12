#include "main.h"

/**
 * reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buff, letters);
	if (r == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	close(fd);
	return (r);
}
