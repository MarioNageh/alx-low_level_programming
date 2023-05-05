#include "main.h"

/**
 * binary_to_uint - writes the character c to stdout
 * @c: the pointer to binary string
 *
 * Return: unsigned int of this string .
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int number = 0, len;
	const char *p = c;

	if (!*c)
		return (0);

	len = strlen((char *) c) - 1;

	while (*p)
	{
		if (*p != '0' && *p != '1')
			return (0);

		number += (1 << len) * ((*p) - '0');
		p++;
		len--;
	}
	return (number);
}
