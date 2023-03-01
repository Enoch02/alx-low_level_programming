#include "main.h"

/**
 * reverse_array - Reverse an array of ints
 * @a: Array
 * @n: Number of elements
 *
 * Return: Returns a pointer to the string
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
