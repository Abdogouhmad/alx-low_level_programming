#ifndef MAIN_H
#define MAIN_H
/*headers*/
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*data  structure*/
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*prototypes*/
int _putchar(char c);
size_t print_list(const list_t *h);

#endif
