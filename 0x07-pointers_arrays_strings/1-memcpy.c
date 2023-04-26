#include "main.h"

/**
 * _memcpy - copy src array to dest
 * @dest: destination array
 * @src: source array
 * @n: the size to fill
 * Return: pointer to array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = n;
	while (n)
	{
		dest[x - n] = src[x - n];
		n--;
	}

	return (dest);
}
