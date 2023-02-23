#include "main.h"

/**
 * print_numbers - Prints numbers
 * Description: Prints from 0 to 9
 * Return: Returns 0
 */
void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
