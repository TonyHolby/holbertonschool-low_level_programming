#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: prints Last digit of
 * the value of n and if it is negative, null or positive
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%d Last digit of ", n);
		printf("%d is ", last_digit);
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("%d Last digit of ", n);
		printf("%d is ", last_digit);
		printf("and is 0\n");
	}
	else
	{
		printf("%d Last digit of ", n);
		printf("%d is ", last_digit);
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
