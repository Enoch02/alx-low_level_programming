#include "main.h"

/**
 * is_prime_number - Check prime number
 * @n: number
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - Check prime number
 * @n: number
 * @c: counter
 *
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime(n, c + 1));
}
