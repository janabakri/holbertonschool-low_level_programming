#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 *             and copies the strings to new memory
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    if (name != NULL)
    {
        d->name = strdup(name);  /* Allocate memory and copy the string */
    }
    else
    {
        d->name = NULL;
    }

    if (owner != NULL)
    {
        d->owner = strdup(owner);
    }
    else
    {
        d->owner = NULL;
    }

    d->age = age;
}
