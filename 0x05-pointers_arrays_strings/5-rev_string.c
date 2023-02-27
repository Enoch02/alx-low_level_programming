#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to reverse
 *
 * Return: Returns nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	char temp[len];

	i = 0;

	while (len--)
	{
		temp[i] = s[len];
		i++;
	}

	for (i = 0; i < sizeof(temp); i++)
		s[i] = temp[i];
}
