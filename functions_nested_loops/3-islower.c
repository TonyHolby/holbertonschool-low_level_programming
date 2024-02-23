#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Description: a function that checks for c is a lowercase character
 * @c: variable
 *
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
