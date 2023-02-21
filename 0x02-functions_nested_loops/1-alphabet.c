#include "main.h"
#include <unistd.h>

/**
 * main - The main function
 * Description: Calls print_alphabet
 * Return: Returns 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints letters
 * Description: Prints lowercase letters
 * Return: Returns 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
