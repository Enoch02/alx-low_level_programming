#include <stdio.h>

/**
  * _islower - Checks letters case
  * * @c: the letter to check
  *
  * Description: Checks if a letter is lowercase
  * Return: Returns 0 if false
  */
int _islower(int c);

/**
 * main - The main function
 * Description: calls _islower
 * Return: Returns 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');

	r = _islower('o');

	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return (0);
}

/**
  * _islower - Checks letters case
  * @c: the letter to check
  *
  * Description: Checks if a letter is lowercase
  * Return: Returns 0 if false
  */
int _islower(int c)
{
	for (int i = 97; i < 123; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
