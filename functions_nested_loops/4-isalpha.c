#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: a function that checks for alphabetic character
 * with c as parameter
 *
 * Return: 1 if c is an alpha character and 0 if c is not an alpha character
 */

int _isalpha(int c)
{
	if (c >= ['a'-'z'] && c <= ['A'-'Z'])
		return (1);

	else if (c >= [65-90] && c <= [97-122])
		return (1);

	else
		return (0);
}
