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
    char i = 1;
    char k = 2;

    _putchar('0');
    _putchar(i + '0');
    _putchar(':');
    _putchar('0');
    _putchar(k + '0');

    while (i < 24)
    {
        char j = 0;
        
    }
    

    /**for (j = 0; j < 24; j++)
    {
        for (k = 0; k < 60; k++)
        {
            _putchar('0' + i);
            _putchar('0' + j);
            _putchar(':');
            
            if (k < 10)
                _putchar('0');
            else
                _putchar('0' + k);
        }
        _putchar('\n');
        i++;
    }*/
}
