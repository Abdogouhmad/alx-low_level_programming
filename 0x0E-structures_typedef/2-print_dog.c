#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*print_dog -printf the data
*@d: the pointer that contains the data we
* want to print
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
