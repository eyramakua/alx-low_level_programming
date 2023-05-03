#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int b, c = 0, q;
	char *d, rev;

	d = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (q = 1; q < c; q++)
	{
		d++;
	}
	for (b = 0; b < (c / 2); b++)
	{
		rev = s[b];
		s[b] = *d;
		*d = rev;
		d--;
	}
}
