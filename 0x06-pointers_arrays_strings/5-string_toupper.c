#include "main.h"

/**
 * string_toupper - Change lowercase leters to uppercase
 * @str: a string
 *
 * Return: Returns a pointer to the string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
