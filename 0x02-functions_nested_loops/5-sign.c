#include <stdio.h>

/**
 * print_sign - Checks letters case
 * @n: the letter to check
 *
 * Description: Prints the sign of a number
 * Return: Returns 0 if false
 */
int print_sign(int n);

/**
 * main - The main function
 * Description: calls print_sign
 * Return: Returns 0
 */
int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	return (0);
}

/**
 * print_sign - Checks letters case
 * @n: the letter to check
 *
 * Description: Prints the sign of a number
 * Return: Returns 0 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	if (n < 0)
	{
		printf("-");
		return (-1);
	}

	printf("0");
	return (0);
}
