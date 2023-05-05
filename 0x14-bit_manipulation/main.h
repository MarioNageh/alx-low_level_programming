#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/* Strings */
int strlen_m(char *c);
int _putchar(char c);


/* Bit Manipulation */
unsigned int binary_to_uint(const char *c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
