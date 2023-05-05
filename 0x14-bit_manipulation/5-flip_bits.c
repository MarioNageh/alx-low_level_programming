#include "main.h"

/**
 * flip_bits - number of flips to make one equal other
 * @n: the first number
 * @m: the second number
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int flips_number = 0;
	unsigned int mask = 1;

	while (n != 0 || m != 0)
	{
		if ((mask & n) != (mask & m))
			flips_number += 1;

		n = n >> 1;
		m = m >> 1;
	}

	return (flips_number);


}
