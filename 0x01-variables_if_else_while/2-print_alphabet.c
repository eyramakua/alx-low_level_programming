#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */

int main(void)
{
	/*declare a variable*/
	char alphabet;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		/*print the value of the variable*/
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}

