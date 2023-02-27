#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print half a string
 * @str: string to print
 *
 * Return: Returns nothing
 */
void puts_half(char *str)
{
	int len = _get_len(str);
	int n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

/**
 * _get_len - Get length of a string
 * @s: string to reverse
 *
 * Return: Returns length
 */
int _get_len(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
