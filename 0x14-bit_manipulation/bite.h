#ifndef BITE_H
#define BITE_H
/*headers*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*print*/
int _putchar(char c);
/*prototypes*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
#endif
