#include <stddef.h>  /* For NULL */
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: pointer to a function that takes a string and prints it
 *
 * Description: If f is NULL, does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
