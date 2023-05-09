#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: array representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int g, l;

	for (g = 0; g < 8; g++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar (a[g][l]);
		}
		_putchar ('\n');
	}
}
