#include <stdio.h>

/**
 * main - The main function
 * Description: prints letters of the alphabet except q and e
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101)
			;

		else if (i == 113)
			;

		else
			putchar(i);
	}

	putchar('\n');
	return (0);
}
