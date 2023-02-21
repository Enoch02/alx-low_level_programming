#include <limits.h>
#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: input number
 *
 * Description: Prints the last digit of a number
 * Return: Returns the last digit of a number
 */
int print_last_digit(int n)
{
	int result = (n % 10);

	_putchar(result + '0');
	return (result);
}
