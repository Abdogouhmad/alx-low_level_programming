#include "main.h"
#include <stdlib>
/*by div-styl*/
/**
 *_memset -set black of memory to value
 *@ptr: 1st argu
 *@v: 2nd value
 *@nb: size
 *Return: ptr
*/
void *_memset(void *ptr, int v, size_t nb)
{
	unsigned char *p = (unsigned char *)ptr;

	for (size_t i = 0; i < num; i++)
	{
		p[i] = (unsigned char)value;
	}
	return (ptr);
}
/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: 1st argu
 *@size: 2nd agru and value
 *Return: calloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;

	if (nmemb == NULL)
		return (NULL);
	if (size == NULL)
		return (NULL);
	size_t sum = nmemb * size;

	cal = malloc(sum);
	if (cal == NULL)
		return (NULL);
	_memset(cal, 0, sum);
	return (cal);
}
