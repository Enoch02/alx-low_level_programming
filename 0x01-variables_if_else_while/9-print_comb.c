#include <stdio.h>

/**
 * main - The main function
 * Description: print all possible combination of single digits
 * Return: Returns 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
