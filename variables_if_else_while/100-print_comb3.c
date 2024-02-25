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
	int increment_num2 = 1;

	for (num1 = 0 ; num1 <= 8 ; num1++)
	{
		num2 = num2 + increment_num2;

		for (num2 = 1 ; num2 <= 9; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);

			while (num1 != 8 && num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
