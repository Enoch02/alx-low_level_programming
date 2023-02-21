#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers
 * @n: a number
 *
 * Description: Prints numbers from n to 98
 * Return: Returns 0
 */
void print_to_98(int n)
{
	int limit = 98;
	int i = n;

	if (n >= 0 && n < 97)
	{
		while (i <= limit)
		{
			printf("%d", i);
			if (i != limit)
				printf(", ");
			i++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (i >= limit)
		{
			printf("%d", i);
			if (i != limit)
				printf(", ");
			i--;
		}
		printf("\n");
	}
	else if (n < 0)
	{
		while (i <= limit)
		{
			printf("%d", i);
			if (i != limit)
				printf(", ");
			i++;
		}
		printf("\n");
	}
	else
		printf("%d\n", n);
}
