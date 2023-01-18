#include "dog.h"
#include <stdio.h>

/**
* init_dog -  initialize a variable of type struct dog
*type dog
*@d: struct pointer
*@name: name identity
*@age: age
*@owner: owner's identity
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
