#include "main.h"

/**
 * _memset - this function used to fill array s to n with b
 * @s: array to fill
 * @b: the byte to fill with
 * @n: the size to fill
 * Return: pointer to array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
