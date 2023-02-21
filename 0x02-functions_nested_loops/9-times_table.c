#include "main.h"

/**
 * times_table - Prints a times table
 * Description: Prints a 9 times table
 * Return: Returns 0
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 0; j < 10; j++)
		{
			int product = i * j;

			_putchar(',');
			_putchar(' ');

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
