#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: the size of the memory to print
 * @c: character to initialize with
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
