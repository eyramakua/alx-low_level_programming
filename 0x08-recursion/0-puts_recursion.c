#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 * @s: String to be printed
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(*s++);
	}
	else
		_putchar('\n');
}
