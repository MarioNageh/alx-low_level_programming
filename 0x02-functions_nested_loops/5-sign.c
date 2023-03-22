#include "main.h"

/**
* Description: print_sign - print + , 0 , - depend on values
* @c: single character
* Return: 1 , 0 , -1
*/

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
