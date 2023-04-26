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
	int i;

	for (i = 0; i < argc ; ++i)
	{
		printf("%s\n",argv[i]);
	}

	return (0);
}
