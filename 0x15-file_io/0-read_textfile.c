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
	char *file_buffer:
	file_buffer = malloc(letters);
	
	if (file_buffer == NULL)
		return 0;

	int file_descriptor = open(filename, 0_RONLY);
	if (file_descriptor == -1)
	{
		free(file_buffer)
			return 0;
	}

	ssize_t write_result = write(STDOUT_FILENO, file_buffer, read_result);
	if (write_result == -1 || write_result != read_result)
	{	
		free(file-buffer);
		close(file_descriptor);
		return 0;
	}
	
	free(file_buffer);
	close(file_descriptor);
	return write_result;
}
