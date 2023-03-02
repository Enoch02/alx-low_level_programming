#include "main.h"

/**
 * leet - Encode a string int 1337
 * @str: a string
 *
 * Return: Returns a pointer to the string
 */
char *leet(char *str)
{
	int i;
	char j[] = "oOlLeEaAtT";
	char k[] = "0011334477";

	for (i = 0; str[i] != '\0'; i++)
	{
		int l;

		for (l = 0; j[l] != '\0'; l++)
		{
			if (str[i] == j[l])
			{
				str[i] = k[l];
			}
		}
	}

	return (str);
}
