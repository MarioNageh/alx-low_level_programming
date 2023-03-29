#include "main.h"
#include <string.h>

/**
* puts_half - print half of string
* @str: pointer to string
* Return: void
*/

void puts_half(char *str)
{
int length = strlen(str);
int i = (length - 1) / 2;

if (i % 2 == 0)
	i = length / 2;

for (i = i + 0 ; i < length; i++)
	_putchar(*(str + i));
_putchar('\n');
}
