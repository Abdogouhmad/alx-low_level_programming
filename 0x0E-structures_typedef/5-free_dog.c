#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog -free the allocated memory
 * @d: the pointer that allocted to data
 * that we want to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
