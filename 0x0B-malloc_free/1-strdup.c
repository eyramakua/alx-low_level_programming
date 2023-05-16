#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *b;
	int d, r = 0;

	if (str == NULL)
		return (NULL);

	d = 0;
	while (str[d] != '\0')
		d++;

	b = malloc(sizeof(char) * (d + 1));

	if (b == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		b[r] = str[r];
	return (b);
}
