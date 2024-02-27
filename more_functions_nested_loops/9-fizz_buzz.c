#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
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

int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if (num == 100)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
