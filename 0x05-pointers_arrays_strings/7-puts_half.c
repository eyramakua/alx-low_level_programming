#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int w;
	int lengt = 0;
	int start;

	while (str[lengt] != '\0')
	{
		lengt++;
	}
	if (lengt % 2 == 0)
	{
		start = lengt / 2;
	}
	else
	{
		start = (lengt - 1) / 2 + 1;
	}
	for (w = start; w < lengt; w++)
	{
		_putchar(str[w]);
	}
	_putchar('\n');
}
