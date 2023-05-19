#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: if the function fails - NULL or a pointer to a concatenated
 * space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int gen = n, lent;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lent = 0; s1[lent]; lent++)
		gen++;

	cat = malloc(sizeof(char) * (gen + 1));

	if (cat == NULL)
		return (NULL);

	gen = 0;

	for (lent = 0; s1[lent]; lent++)
		cat[gen++] = s1[lent];

	for (lent = 0; s2[lent] && lent < n; lent++)
		cat[gen++] = s2[lent];

	cat[gen] = '\0';

	return (cat);
}
