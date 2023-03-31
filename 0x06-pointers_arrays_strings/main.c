#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char message[] = "Hello, world!";
    printf("Original message: %s\n", message);
    rot13(message);
    printf("Encrypted message: %s\n", message);
    rot13(message);
    printf("Decrypted message: %s\n", message);
    return 0;
    return (0);
}
