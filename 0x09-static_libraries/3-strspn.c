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
	unsigned int len = 0;
	char *temp = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				len++;
				break;
			}
		}

		if (!*--accept)
			break;
		accept = temp;
	}

	return (len);
}
