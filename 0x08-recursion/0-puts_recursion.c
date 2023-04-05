#include "main.h"
/**
* Description: _puts_recursion - Print String using recursion
* @s: Pointer To String
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);


}
