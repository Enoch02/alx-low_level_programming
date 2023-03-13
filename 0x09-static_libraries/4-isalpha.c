#include "main.h"

/**
 * _isalpha - Checks letters case
 * @c: the letter to check
 *
 * Description: Checks for alphabetic characters
 * Return: Returns 0 if false
 */
int _isalpha(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == c)
			return (1);
	}

	for (i = 65; i < 91; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
