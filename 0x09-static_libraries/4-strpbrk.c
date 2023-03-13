#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Get the length of a prefix substring
 * @s: String
 * @accept: Substring to accept
 *
 * Return: Returns a pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
