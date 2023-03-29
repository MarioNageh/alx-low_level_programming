#include "main.h"

/**
* print_rev - print the string in reverse order
* @s: string to reverse
* Return: void
*/

void print_rev(char *s)
{
int i;

for (i = strlen(s); i >= 0 ; i--)
{
	putchar(*(s + i));
}
putchar('\n');
}
