#include "main.h"

/**
 * set_bit - return the bit at index
 * @n: the number
 * @index: index value
 *
 * Return: bit value at this index
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask;

	/* if index bigger thant bit 0 , 63 */
	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);

}
