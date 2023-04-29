#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of a triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int d, e, f;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (d = 0; d < size; d++)
		{
			for (e = size - d; e > 1; e--)
			{
				putchar(32);
			}

			for (f = 0; f <= d; f++)
			{
				putchar(35);
			}

			putchar('\n');
		}
	}
}
