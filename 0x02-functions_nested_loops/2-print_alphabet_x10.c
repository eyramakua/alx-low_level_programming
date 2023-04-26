#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	char d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 97; d <= 122; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
