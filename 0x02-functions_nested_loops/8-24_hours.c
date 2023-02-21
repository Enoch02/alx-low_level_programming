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

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			
			_putchar(':');

			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			
			_putchar('\n');
		}
	}
}
