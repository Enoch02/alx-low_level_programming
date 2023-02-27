#include "main.h"
/**
 * print_rev - Print a string in reverse
 * @s: string to print
 *
 * Return: Returns nothing
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != 0)
	{
		len++;
		i++;
	}

	while (s[len - 1] >= 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
