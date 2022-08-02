#include <stdio.h>
#include "main.h"
/**
*init_dog - initializer
*@d: struct to be initialized
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
