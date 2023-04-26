#include <stdio.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* description: main - Program That Prints It's Name
* @argc: The Args Count
* @argv: The Array Or Args
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
