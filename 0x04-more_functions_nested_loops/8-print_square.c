#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: void
 */
void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 0; co < size; co++)
		{
			for (ro = 0; ro < size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
