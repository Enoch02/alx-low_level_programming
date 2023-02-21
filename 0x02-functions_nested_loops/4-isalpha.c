#include <stdio.h>

/**
 * _isalpha - Checks letters case
 * @c: the letter to check
 *
 * Description: Checks for alphabetic characters
 * Return: Returns 0 if false
 */
int _isalpha(int c);

/**
 * main - The main function
 * Description: calls _isalpha
 * Return: Returns 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');

	r = _isalpha('o');
	putchar(r + '0');

	r = _isalpha(108);
	putchar(r + '0');

	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _isalpha - Checks letters case
 * @c: the letter to check
 *
 * Description: Checks for alphabetic characters
 * Return: Returns 0 if false
 */
int _isalpha(int c)
{
	for (int i = 97; i < 123; i++)
	{
		if (i == c)
			return (1);
	}

	for (int i = 65; i < 91; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
