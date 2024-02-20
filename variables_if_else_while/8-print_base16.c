#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16, followed by
 * a new line with the putchar function
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char c;

	for (n = '0' ; n <= '9' ; n++)
		putchar(n);

	for (c = 'a' ; c < 'g' ; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
