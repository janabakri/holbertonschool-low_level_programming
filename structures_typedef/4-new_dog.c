#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL on failure
 *
 * Description: Allocates memory for a new dog_t struct and copies
 * the name and owner strings into newly allocated memory.
 * If any allocation fails, frees all previously allocated memory
 * and returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the dog struct */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Allocate and copy the name */
	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(new_name, name);

	/* Allocate and copy the owner */
	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* Assign values to the struct */
	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
