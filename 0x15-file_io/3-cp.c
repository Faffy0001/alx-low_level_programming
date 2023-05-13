#include "main.h"

#define READ_ERR "Error: Can't read from a file %s\n"
#define WRITE_ERR "Error: Can't writr to a file %s\n"

/**
 * main: copies the contents of a file to another
 * file_from: The file with the contents to copy
 * file_to: The file we are copying to
 * @argc:number of argument
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to, cloce, w, r;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	while (1)
	{
		r = read(file_from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

		if (r > 0)
		{
			w = write(file_to, buffer, r);
			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		}
		else
			break;
	}

	cloce = close(file_from);
	if (cloce == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	cloce = close(file_to);
	if (cloce == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}

