#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int row = 0, column, result;

	if (n > 15 || n < 0)
		return;
	while (row <= n)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (result > 99)
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10 % 10) + '0');
				_putchar(result % 10 + '0');
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (column != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
				_putchar(result + '0');

			if (column != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		row++;
	}
}

