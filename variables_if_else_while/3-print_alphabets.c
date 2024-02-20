#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase and then in 
 * uppercase, followed by a newline
 *
 * Return: 0
 */

int main(void)
{
	char alphabet_lower;
	char alphabet_upper;

	for (alphabet_lower = 'a' ; alphabet_lower <= 'z' ; alphabet_lower++)
		putchar(alphabet_lower);

	for (alphabet_upper = 'A' ; alphabet_upper <= 'Z' ; alphabet_upper++)
		putchar(alphabet_upper);

	putchar('\n');

	return (0);
}
