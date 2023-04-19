#include <stdio.h>
#include "function_pointers.h"
/*by div-styl*/

/**
 * print_name -print the name
 * @name: the name
 * @f: the fun pointer
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
