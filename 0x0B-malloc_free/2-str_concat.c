#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Duplicated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, l1, l2, tl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	tl = l1 + l2;
	new_str = malloc(sizeof(char) * (tl + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		new_str[i] = s1[i];

	for (j = 0; j <= l2; i++, j++)
		new_str[i] = s2[j];

	return (new_str);
}
