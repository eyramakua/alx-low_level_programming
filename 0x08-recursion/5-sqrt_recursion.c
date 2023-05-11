#include "main.h"
#include <stdio.h>

int _sqrt(int n, int b);

/**
 * _sqrt_recursion - prints the natural square root of a number
 *
 * @n: natural square root to calculate
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the natural squre root
 * @n: natural square root to calculate
 * @b: recursive number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int b)
{
	int sqrt = b * b;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (b);
	}
	else
	{
		return (_sqrt(n, b + 1));
	}
}
