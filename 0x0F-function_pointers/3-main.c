#include <stdio.h>
#include "3-calc.h"

/**
* main - the main function
* @argc: the size of args
* @agrv: the args values
* Return: 0
*/

int main(int argc, char *agrv[])
{

	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	f = get_op_func(agrv[2]);

	if (f == NULL)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", f(atoi(agrv[1]), atoi(agrv[3])));
	return (0);
}
