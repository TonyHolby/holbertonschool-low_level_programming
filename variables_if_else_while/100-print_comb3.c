#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all possible different
 * combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0 ; num1 <= 8 ; num1++)
	{
		for (num2 = 1 ; num2 <= 9 ; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
