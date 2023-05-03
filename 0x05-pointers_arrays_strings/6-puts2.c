#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *
 * @str: string to print.
 *
 * Return: void
 */
void puts2(char *str)
{
	int e;
	int f = 0;

	while (str[f] != '\0')
	{
		f++;
	}
	for (e = 0; e < f; e += 2)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
