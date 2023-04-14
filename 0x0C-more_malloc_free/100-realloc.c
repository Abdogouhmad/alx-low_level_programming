#include "main.h"
#include <stdlib.h>
/*by div-styl*/
/**
 *_realloc -function that reallocates a memory block using malloc and free
 *@ptr: pointer
 *@old_size: 1st int
 *@new_size: 2nd int
 *Return: string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *m;
	char *srt = (char *)ptr;
	char *dest = (char *)m;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	m = malloc(new_size);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		dest[i] = srt[i];
	}

	free(ptr);
	return (m);
}
