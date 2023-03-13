#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: A string
 *
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != 0)
	{
		len++;
		i++;
	}

	return (len);
}
