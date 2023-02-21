#include <stdio.h>

/**
  * print_alphabet_x10 - Prints letters
  * Description: Prints lowercase letters 10 times
  * Return: Returns 0
  */
void print_alphabet_x10(void);

/**
 * main - The main function
 * Description: Calls print_albhabet_x10
 * Return: Returns 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

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
		for (int j = 97; j < 123; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}
}
