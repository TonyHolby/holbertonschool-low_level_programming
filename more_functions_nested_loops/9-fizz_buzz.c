#include <stdlib.h>
#include <stdio.h>

/**
 * FizzBuzz - Entry point
 *
 * Description: a program that prints the numbers from 1 to 100,
 * followed by a new line
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print FizzBuzz
 * Each number or word are separated by a space
 *
 * Return: 0
 */

int FizzBuzz(void)
{
	int num;

	for (num = 0 ; num <= 100 ; num++)
	{
		if (num % 3 == 0)
		{
			printf("%iFizz ");
		}
		else if (num % 5 == 0)
		{
			printf("%iBuzz ");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%iFizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
