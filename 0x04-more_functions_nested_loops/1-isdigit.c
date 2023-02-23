#include "main.h"

/**
 * _isdigit  - checks digits
 * @c: number
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);

	return (0);
}
