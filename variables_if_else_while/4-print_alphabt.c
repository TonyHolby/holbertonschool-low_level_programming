#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
			continue;
		else
			putchar(alphabet);

	putchar('\n');

	return (0);
}
