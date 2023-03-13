#include "main.h"

/**
 * _abs - Return absolute value
 * @n: a number
 *
 * Description: Computes the absolute value of a number
 * Return: Returns the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);

	return (n);
}
