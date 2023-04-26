#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - minimum number of coins to make change for an amount of money
 *@argc: number of args passed
 *@argv: args passed
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int cents[] = {25, 10, 5, 2, 1};
	int i = 0, number, counter = 0, last_div;


	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	number = atoi(argv[1]);

	if (number < 0)
		printf("%d\n", 0);
	else
	{
		while (number)
		{
			for (i = 0; i < 5; i++)
			{
				if (cents[i] <= number)
				{
					last_div = number / cents[i];
					counter += last_div;
					number -= last_div * cents[i];
				}
			}
		}
		printf("%d\n", counter);
	}


	return (0);
}
