#include "main.h"

/**
* Description: print_last_digit - prints the last digit of a number.
* @c: integer
* Return: last digit of a number
*/

int print_last_digit(int c)
{
	int last;

	if (c < 0)
		c *= -1;
	last = c % 10;
	_putchar('0' + last);
	return (0);
}
