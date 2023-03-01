#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenate 2 strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Returns a pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < strlen(dest); i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
