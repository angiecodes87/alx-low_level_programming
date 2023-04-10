#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (wr);
}

