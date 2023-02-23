#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: number of \ character
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	if (n < 0 || n == 0)
		_putchar('\n');
	else
	{
		int i;
		int j = 0;

		for (i = 0; i < n; i++)
		{
			int k;

			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
}
