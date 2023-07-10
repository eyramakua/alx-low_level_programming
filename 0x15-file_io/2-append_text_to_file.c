#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file
 *
 * @filename: the name of the file
 * @text_content:  string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int g, m, den = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (den = 0; text_content[den];)
			den++;
	}

	g = open(filename, O_WRONLY | O_APPEND);
	m = write(g, text_content, den);

	if (g == -1 || m == -1)
		return (-1);

	close(g);
	return (1);
}
