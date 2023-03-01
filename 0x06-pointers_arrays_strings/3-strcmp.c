#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if both strings are equal, a positive value
 * if s1 > s2 and a negative value if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
			break;
		}

		s1++;
		s2++;
	}

	return (res);
}
