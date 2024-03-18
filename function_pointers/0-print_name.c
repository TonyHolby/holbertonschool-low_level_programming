#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * Description: a function that prints a name
 * @name: string
 * @f: function pointer to a string
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
