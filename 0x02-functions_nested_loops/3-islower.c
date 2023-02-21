#include "main.h"

/**
 * _islower - Checks letters case
 * @c: the letter to check
 *
 * Description: Checks if a letter is lowercase
 * Return: Returns 0 if false
 */
int _islower(int c)
{
	for (int i = 97; i < 123; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
