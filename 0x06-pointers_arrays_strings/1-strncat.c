#include "main.h"

/**
 * _strncat - Concatenate 2 strings
 * @dest: The destination string
 * @src: The source string
 * @n: Number of bytes to use
 *
 * Return: Returns a pointer to the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _get_len(dest);
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

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
