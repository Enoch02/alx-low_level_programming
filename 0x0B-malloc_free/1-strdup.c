#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create duplicate of a string
 * @str: string to duplicate
 *
 * Return: Duplicated string.
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	duplicate = malloc(sizeof(*str) * len);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
