#include <stdio.h>

/**
 * Description: main - Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
int num = 1;
int sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0)
		{
			sum += num;
		}
		else if (num % 5 == 0)
		{
			sum += num;
		}
		num++;
	}
printf("%d\n", sum);
return (0);
}

