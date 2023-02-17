#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - The main function
 * Description: Prints the last digit of number stored in n
 * Return: Returns 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
		printf(" and is greater than 5\n");
	else if (last_digit < 6 && last_digit != 0)
		printf(" and is less than 6 and not 0\n");
	else
		printf(" and is 0\n");

	return (0);
}
