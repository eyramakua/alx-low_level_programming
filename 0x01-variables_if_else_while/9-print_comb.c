#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ant = 0;

	for (ant = 0; ant < 10; ant++)
	{
		putchar(ant + '0');
		if (ant != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}

