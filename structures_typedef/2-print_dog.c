#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * If d is NULL, does nothing.
 * If any field is NULL, prints (nil) instead.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    /* Print name or (nil) */
    if (d->name != NULL)
        printf("Name: %s\n", d->name);
    else
        printf("Name: (nil)\n");

    /* Print age */
    printf("Age: %f\n", d->age);

    /* Print owner or (nil) */
    if (d->owner != NULL)
        printf("Owner: %s\n", d->owner);
    else
        printf("Owner: (nil)\n");
}
