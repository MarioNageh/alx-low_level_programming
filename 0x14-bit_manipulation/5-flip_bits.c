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
	unsigned int mask = 1, max_flips = (sizeof(unsigned long int) * 8) - 1;

	while (max_flips)
	{
		if ((mask & n) != (mask & m))
			flips_number += 1;

		mask = mask << 1;
		max_flips -= 1;
	}

	return (flips_number);


}
