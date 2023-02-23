#include "main.h"

/**
 * print_triangle - Draws a triangle
 * @size: size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	if (size < 0 || size == 0)
		_putchar('\n');
	else
	{
		int i = 1;

		while (i <= size)
		{
			int blanks = size - i;
			int tags = size - blanks;
			int j;

			for (j = 0; j < blanks; j++)
				_putchar(' ');

			for (j = 0; j < tags; j++)
				_putchar('#');
			_putchar('\n');

			blanks--;
			i++;
		}
	}
}
