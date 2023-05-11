#include "main.h"

int prime_check(int n, int b);

/**
 * is_prime_number - returns if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, 2));
}

/**
 * prime_check - check if the number is prime
 *
 * @n: number to check
 * @b: to check n against
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int prime_check(int n, int b)
{
	if (b * b > n)
	{
		return (1);
	}
	else if (n % b == 0)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, b + 1));
	}
}
