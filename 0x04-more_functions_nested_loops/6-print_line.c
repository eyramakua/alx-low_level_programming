#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: The number of times the character _ should be printed
 *
 * Return: 0
 */
void print_line(int n)
{
	int Z;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (Z = 0; n < Z; Z++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
