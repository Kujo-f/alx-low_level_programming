#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text files then print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed out
 *        0 when function fails or if filename = null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wrt;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (wrt);
}
