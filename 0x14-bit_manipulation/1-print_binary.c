#include "main.h"

/**
 * print_binary - print binary rep of integer
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{

	unsigned long int mask = 1ul << 63;

	while (!(mask & n) && mask != 0)
		mask = mask >> 1;

	if (mask == 0)
		_putchar('0');

	while (mask)
	{
		if (mask & n)
			putchar('1');
		else
			putchar('0');

		mask = mask >> 1;
	}

}
