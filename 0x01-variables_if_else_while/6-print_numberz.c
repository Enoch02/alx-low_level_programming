#include <stdio.h>

/**
 * main - The main function
 * Description: prints 0 - 9
 * Return: Returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
	return (0);
}
