#include <stdio.h>
/**
  * main - Finds & prints the sum of the even terms less than 4,000,000.
  *
  * Return: Always 0.
  */
int main(void)
{
	int i = 0;
	long a = 1, c = 2, sum = c;

	while (c + a < 4000000)
	{
		c += a;
	if (c % 2 == 0)
		sum += c;
		a = c - a;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
