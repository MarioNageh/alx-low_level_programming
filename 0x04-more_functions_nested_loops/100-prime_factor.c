#include <stdio.h>
#include <math.h>

/**
* main - Prints the largest prime factor of the number 612852475143
* Return: Always 0 (Success)
*/

int main(void)
{
	long long number = 612852475143;
	long long factor = 2;
	long long largest = 0;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			largest = factor;
			number /= factor;
			while (number % factor == 0)
				number /= factor;
		}
		factor++;
	}

	printf("%lld\n", largest);

	return (0);
}
