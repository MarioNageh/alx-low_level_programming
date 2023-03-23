#include <stdio.h>

/**
 * Description: main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 2;
	long int first = 1, second = 2;
	long int temp;

	printf("%lu, ", first);
	while (count <= 50)
	{
		if (count == 50)
			printf("%lu\n", second);
		else
			printf("%lu, ", second);

		temp = second;
		second += first;
		first = temp;
	count++;
	}
	return (0);
}
