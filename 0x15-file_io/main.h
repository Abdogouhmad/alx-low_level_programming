#ifndef _MAIN_H_
#define _MAIN_H_
/*headers*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/*printing char*/
int _putchar(char c);
/*tasks prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
#endif
