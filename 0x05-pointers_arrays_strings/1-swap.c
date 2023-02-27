#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: number 1
 * @b: number 2
 *
 * Return: Returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
