#include "main.h"
/**
 * print_sign - Checks letters case
 * @n: the letter to check
 *
 * Description: Prints the sign of a number
 * Return: Returns 0 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
