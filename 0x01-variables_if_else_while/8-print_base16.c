#include <stdio.h>

/**
 * main - The main function
 * Description: prints hexadecimal numbers
 * Return: Returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
