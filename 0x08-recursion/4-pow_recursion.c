#include "main.h"

/**
 * _pow_recursion - get the power of a number
 * @x: number
 * @y: power
 *
 * Return: the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
