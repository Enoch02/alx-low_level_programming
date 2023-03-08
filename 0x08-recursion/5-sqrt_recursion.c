#include "main.h"

/**
 * _sqrt_recursion - Get a numbers square root
 * @n: number
 *
 * Return: The square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 1));
}


/**
 * _sqrt - _sqrt_recursion
 * @n: number
 * @i: power
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
