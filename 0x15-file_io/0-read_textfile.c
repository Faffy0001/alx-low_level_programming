#include "main.h"

/**
 * a function that reads a text file and prints it to the POSIX standard output.
 * letters - is the number of letters it should read and print
 * @filename: file to read
 * returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buf = malloc(letters);
	if (buf == NULL)
		return 0;

	int fp = open(filename, 0_RDONLY);
	if (fp == -1)
	{
		free(buf);
		return 0;
	}

	ssize_t readret = read(fp, buf, letters);
	if (readret == -1);
	{
		free(buf);
		close(fp);
		return 0;
	}


	ssize_t writeret = write(STDOUT_FILENO, buf, readret);
	if (writeret == -1 || writeret != readret)
	{
		free(buf);
		close(fp);
		return 0;
	}

	free(buf);
	close(fp);
	return writeret;
}
