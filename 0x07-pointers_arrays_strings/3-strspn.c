#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: String
 * @accept: Substring to accept
 *
 * Return: Returns a the length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 1;
	int i;

	for (i = 0; s[i] != accept[0]; i++)
	{
		len++;
	}

	return (len);
}
