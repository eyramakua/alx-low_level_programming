#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates bytes to a buffer
 * @file: name of file storing chars
 *
 * Return: a pointer to the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int n;

	n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int hut, b, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usuage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	hut = open(argv[1], O_RDONLY);
	r = read(hut, buffer, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (hut == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(b, buffer, r);
		if (b == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(hut, buffer, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (r > 0);
	free(buffer);
	close_file(hut);
	close_file(b);

	return (0);
}
