#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*by div-styl*/
/**
 * _memset - sets block of memory to a value
 * @ptr: pointer to the memory block
 * @v: value to set
 * @nb: size of the memory block
 *
 * Return: ptr
 */
void *_memset(void *ptr, int v, size_t nb)
{
	unsigned char *p = (unsigned char *)ptr;
	size_t i = 0;

	for (i = 0; i < nb; i++)
	{
		p[i] = (unsigned char)v;
	}
	return (ptr);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t sum = 0;
	void *cal;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	sum = nmemb * size;

	cal = malloc(sum);
	if (cal == NULL)
		return (NULL);

	_memset(cal, 0, sum);
	return (cal);
}
