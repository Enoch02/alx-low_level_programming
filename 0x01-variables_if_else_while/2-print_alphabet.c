#include <stdio.h>

/**
 * main - The main function
 * Description: Prints text to stdout with puts
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
