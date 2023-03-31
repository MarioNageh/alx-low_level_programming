#include "main.h"

/**
* Description: print_number - To Print Integer Number
* @n: Number To Bee Printed
* Return: void
*/

void print_number(int n)
{

	int divisor = 1;
	int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / divisor > 9)
		divisor *= 10;

	for (i = divisor; i > 0; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
	}
}
