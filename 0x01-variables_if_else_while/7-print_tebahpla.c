#include <stdio.h>

/**
 * main - The main function
 * Description: print lowercase alphabet in reverse
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = 122; i > 96; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
