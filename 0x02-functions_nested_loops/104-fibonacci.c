#include <stdio.h>

#define LARGEST 10000000000

/**
 * main - main block
 *
 * Description: Find and print the first 98 fibonacci
 * numbers starting with 1 and 2.
 * Numbers should be comma and space separated.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int front1 = 0, back1 = 1, front2 = 0, back2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", back1, back2);

	for (count = 2; count < 98; count++)
	{
		if (back1 + back2 > LARGEST || front2 > 0 || front1 > 0)
		{
			hold1 = (back1 + back2) / LARGEST;
			hold2 = (back1 + back2) % LARGEST;
			hold3 = front1 + front2 + hold1;

			front1 = front2;
			front2 = hold3;
			back1 = back2;
			back2 = hold2;

			printf("%lu%010lu", front2, back2);
		}
		else
		{
			hold2 = back1 + back2;
			back1 = back2;
			back2 = hold2;

			printf("%lu", back2);
		}

		if (count != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
