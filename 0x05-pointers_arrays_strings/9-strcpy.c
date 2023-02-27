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

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
