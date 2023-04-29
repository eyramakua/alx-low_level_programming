#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: the expected result
 */
int main(void)
{
	long h = 612852475143;
	int j = 2;

	while (j * j <= h)
	{
		if (h % j == 0)
		{
			h /= j;
		}
		else
		{
			j++;
		}
	}
	printf("%ld\n", h);
	return (0);
}
