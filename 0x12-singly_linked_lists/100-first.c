#include <stdio.h>


/**
 * print_before_main - Prints a string before the
 *        main function is executed.
 */

void __attribute__((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
