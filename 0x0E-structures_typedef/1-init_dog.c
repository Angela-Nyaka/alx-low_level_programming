#include <stdlib.h>
#include "dog.h"
/**
*init_dog- initialize a variable of type
*@d: structure
*@name: pointer to char
*@age: age
*@owner: onwer to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;
}
