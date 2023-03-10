#include "main.h"

/**
 * _isupper  - checks upper case
 * @c: letter to check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char l;

	for (l = 'A'; l <= 'Z'; l++)
	{
		if (l == c)
			return (1);
	}

	return (0);
}
