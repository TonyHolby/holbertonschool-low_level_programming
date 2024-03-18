#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * Description: a function that executes a function given as a parameter on
 * each element of an array
 * @array: array of integer
 * @size: variable of type size_t
 * @action: function pointer to an integer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
