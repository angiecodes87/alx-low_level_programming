#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	write_count = write(fd_to, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	}
	if (read_count == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	if (close(fd_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	exit(100);
	}
	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(100);
	}
	return (0);
}

