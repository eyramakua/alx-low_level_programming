#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 *
 * @filename: name of file to be read
 * @letters: number of letter to be read
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *def;
	ssize_t ab;
	ssize_t n;
	ssize_t m;

	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);
	def = malloc(sizeof(char) * letters);
	m = read(ab, def, letters);
	n = write(STDOUT_FILENO, def, m);

	free(def);
	close(ab);
	return (n);
}
