#include "main.h"
#include <string.h>

/**
 * print_rev - Print a string in reverse
 * @s: string to print
 *
 * Return: Returns nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(s[len]);

	_putchar('\n');
}
