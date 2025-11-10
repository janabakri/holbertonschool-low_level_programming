#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* for size_t */

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array of integers
 * @size: the number of elements in array
 * @action: pointer to a function to execute on each element
 *
 * Description: if array or action is NULL, does nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
