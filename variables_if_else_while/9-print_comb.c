#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers,
 * separeted by and followed by a space
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if (n !=  9)
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
