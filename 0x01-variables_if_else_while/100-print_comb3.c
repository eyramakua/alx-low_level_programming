#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int code, max;

	for (code = 0; max < 9; code++)
	{
		for (max = code + 1; max < 10; max++)
		{
			putchar(code + '0');
			putchar(max + '0');
			if (code < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
