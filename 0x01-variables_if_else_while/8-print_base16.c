#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar(hex + '0');
	}
	for (hex = 0; hex < 6; hex++)
	{
		putchar(hex + 'a');
	}
	putchar('\n');
	return (0);
}
