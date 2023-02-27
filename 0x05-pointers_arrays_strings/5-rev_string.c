#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to reverse
 *
 * Return: Returns nothing
 */
void rev_string(char *s)
{
	int i, j;
	int len = _get_len(s);
	char *str = s;
	char temp;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = str[j];
			str[j] = str[j - 1];
			str[j - 1] = temp;
		}
	}
}

/**
 * _get_len - Get length of a string
 * @s: string to reverse
 *
 * Return: Returns length
 */
int _get_len(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
