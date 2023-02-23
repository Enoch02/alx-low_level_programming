#include "main.h"

/**
 * more_numbers - Prints numbers
 * Description: Prints from 0 to 14 ten times
 * Return: Returns 0
 */
void more_numbers(void)
{
	char i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int first_num;

			if (j < 10)
				first_num = j;
			else
				first_num = j / 10;

			_putchar(first_num + '0');

			if (j > 9)
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
