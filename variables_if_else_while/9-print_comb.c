#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
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
			putchar(', ');
		}
		else
		{
			putchar(n);
			putchar('\n');
		}
	}

	return (0);
}
