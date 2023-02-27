#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string to another location
 * @dest: Destination
 * @src: Source
 *
 * Return: Returns nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int src_len = _get_len(src);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
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
