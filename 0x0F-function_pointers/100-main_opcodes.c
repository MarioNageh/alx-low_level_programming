#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of this function
 * @argc: the size of the argument vector
 * @argv: the argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	char *mem = (char *) main;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		puts("Error");
		exit(2);
	}

	while (number_of_bytes--)
		printf("%02x%c", *mem++ & 0xff, number_of_bytes ? ' ' : '\n');

}
