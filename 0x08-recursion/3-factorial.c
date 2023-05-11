#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 *
 * @n: factorial number to calculate
 *
 * Return: result of calculation
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
