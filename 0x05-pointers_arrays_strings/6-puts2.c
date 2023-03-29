#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts2 - print the first char with step of 2
* @s: pointer to string
*
*/

void puts2(char *s)
{
int i = strlen(s) - 1;

for (; i >= 0 ; i -= 2)
{
_putchar(s[strlen(s) - i - 1]);

}
_putchar('\n');

}
