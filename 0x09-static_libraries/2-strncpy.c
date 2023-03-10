#include "main.h"

/**
 * _strncpy - Concatenate 2 strings
 * @dest: The destination string
 * @src: The source string
 * @n: Number of bytes to use
 *
 * Return: Returns a pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
