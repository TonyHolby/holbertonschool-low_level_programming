#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase in reverse, followed
 * by a new line
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
