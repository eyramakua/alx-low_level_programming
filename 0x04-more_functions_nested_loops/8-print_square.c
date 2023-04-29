#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 *
 * @size: the size of the square
 *
 * Return: 0
 */
void print_square(int size)
{
	int e, f;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (e = 0; e < size; e++)
		{
			for (f = 0; f < size; f++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
