#include "main.h"

/**
* Description: print_alphabet_x10 - print 10 times alphabets in lowercase
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int c = 0;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
