#include "main.h"

/**
 * get_endianness - check if system is little endian ,\
 * big endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/* my year I was born -_- */
	unsigned int i = 1;
	char *s = (char *) &i;

	return (*s == 1);
}
