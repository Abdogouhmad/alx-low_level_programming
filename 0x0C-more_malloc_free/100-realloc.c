#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block
 * @old_size: old size of the memory block
 * @new_size: new size of the memory block
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str = (char *)ptr;
	void *m;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	m = malloc(new_size);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)m)[i] = str[i];
	}

	free(ptr);

	return (m);
}
