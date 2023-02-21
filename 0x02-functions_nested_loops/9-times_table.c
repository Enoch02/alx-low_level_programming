#include "main.h"

int main(void)
{
    times_table();
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		for (j = 0; j < 10; j++)
		{
			int product = i * j;

			if (product < 10)
			{
				_putchar(product + '0');

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
