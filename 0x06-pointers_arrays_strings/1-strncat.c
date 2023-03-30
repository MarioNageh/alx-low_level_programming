#include "main.h"
#include <string.h>

/**
* Description: _strncat - concatenate the src into dest with number of n
* @dest: destination array
* @src: source array
* @n: number of bytes from n to be concatenated
* Return: char * to destination
*/

char *_strncat(char *dest, char *src, int n)
{
int lOD = strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[lOD + i] = src[i];
dest[lOD + i] = '\0';


return (dest);
}
