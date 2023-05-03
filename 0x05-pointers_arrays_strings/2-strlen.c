#include "main.h"
#include <string.h>

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: String.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int A = 0;

	for (; *s != '\0'; s++)
	{
		A++;
	}
	return (A);
}
