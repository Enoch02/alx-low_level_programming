#include "main.h"

/**
  * print_alphabet_x10 - Prints letters
  * Description: Prints lowercase letters 10 times
  * Return: Returns 0
  */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
