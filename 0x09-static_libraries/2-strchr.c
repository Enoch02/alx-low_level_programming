#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to find
 *
 * Return: Returns a pointer to the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			char *ptr = &s[i];

			return (ptr);
		}
	}

	return (NULL);
}
