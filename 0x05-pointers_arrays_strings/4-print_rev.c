#include "main.h"

/**
* print_rev - print the string in reverse order
* @s: string to reverse
* Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
