#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*init_dog -init a variable for dog struct
*@d: pointer veraible that we will use it for init
*@name: name of dog
*@age: age of the dog
*@owner: the owner of it
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
