#include "main.h"

/**
* Description: _strncpy - copy the source array into destination array
* @dest: destination array
* @src:  source array
* @n: the number of bytes to be copy
* Return: char *
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

for (; i < n; i++)
	dest[i] = '\0';



return (dest);
}
