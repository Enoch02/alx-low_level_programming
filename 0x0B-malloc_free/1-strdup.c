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
	int i, j;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	duplicate = malloc(sizeof(*str) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		duplicate[j] = str[j];

	return (duplicate);
}
