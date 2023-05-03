#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse.
 * @s: string to be printed in reverse
 *
 * Return: String in reverse
 */
void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (b -= 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
