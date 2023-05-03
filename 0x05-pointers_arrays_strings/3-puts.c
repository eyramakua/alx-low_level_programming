#include "main.h"

/**
 * _puts - Prints a string follwed by a new line to stdout.
 *
 * @str: string to print.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
