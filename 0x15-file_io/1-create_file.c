#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int cd, h, mil = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (mil = 0; text_content[mil];)
			mil++;
	}
	cd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	h = write(cd, text_content, mil);

	if (cd == -1 || h == -1)
		return (-1);

	close(cd);
	return (1);
}
