#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: the size of the memory to print
 * @c: character to initialize with
 *
 * Return: Char array if not null.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
