#include <stdio.h>
#include "main.h"
/**
* description: main - Program That Prints It's Name
* @argc: The Args Count
* @argv: The Array Or Args
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
		printf("%d\n", 0);

	else
	{
		while (*argv)
		{
			argv++;
			i++;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
