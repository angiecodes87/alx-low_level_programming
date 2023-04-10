#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters that were read and printed, or 0 if an
 * error occurred
*/

eeize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nread, nwritten;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buf, nread);
	if (nwritten == -1 || (size_t)nwritten != nread)
	{
		free(buf);
		close(fd);
		return (0);
	}

		free(buf);
		close(fd);

	return (nwritten);
}

