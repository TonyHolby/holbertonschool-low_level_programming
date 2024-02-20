#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers,
 * separeted by , and followed by a space
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48 ; n < 16 ; n++)
	{
		if (n != 57)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(n);
	}

	return (0);
}
