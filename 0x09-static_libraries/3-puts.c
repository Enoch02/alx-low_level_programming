#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to print
 *
 * Return: Returns nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
