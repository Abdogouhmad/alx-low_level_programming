#ifndef _MAIN_H_
#define _MAIN_H_
/*defines*/
#define BUFF_SIZE 1024
/*headers*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/*printing char*/
int _putchar(char c);
/*tasks prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
