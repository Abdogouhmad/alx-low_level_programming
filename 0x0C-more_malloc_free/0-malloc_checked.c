#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked -function that allocates memory using malloc.
 *@b: size of the string
 * Return: str
 * **/
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}

	return (str);
}

