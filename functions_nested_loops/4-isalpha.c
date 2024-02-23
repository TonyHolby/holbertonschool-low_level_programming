#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: a function that checks for alphabetic character
 * @c: variable
 *
 * Return: 1 if c is an alpha character and 0 if c is not an alpha character
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else if (c >= 65 && c <= 90)
		return (1);

	else if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
