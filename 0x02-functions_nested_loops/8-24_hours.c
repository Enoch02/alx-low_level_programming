#include "main.h"

int main(void)
{
	jack_bauer();
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * jack_bauer - Jack Bauer?
 * Description: Prints every day of Jack Bauer
 * Return: Returns 0
 */
void jack_bauer(void)
{
	char i;
	char j;

	_putchar('0');
	_putchar(i + '0');
	_putchar(':');
	_putchar('0');
	_putchar(k + '0');

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i + '0');

			_putchar(':');

			if (j < 10)
				_putchar('0');
			_putchar(j + '0');
			_putchar('\n');
		}
	}
}
