#include "main.h"

/**
* Description: print_last_digit - prints the last digit of a number.
* @c: integer
* Return: last digit of a number
*/

int print_last_digit(int c)
{
	int last;

	last = c % 10;

	if (last < 0)
		last *= -1;
	_putchar('0' + last);
	return (last);
}
