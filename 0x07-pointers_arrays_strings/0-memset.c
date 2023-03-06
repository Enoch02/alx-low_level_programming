#include "main.h"

/**
 * _memset - Concatenate 2 strings
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: Number of bytes
 *
 * Return: Returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}
