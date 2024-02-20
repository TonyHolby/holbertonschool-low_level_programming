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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n <= 5)
	{
		printf("%d Last digit of", n);
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("%d Last digit of", n);
		printf("and is 0\n");
	}
	else
	{
		printf("%d Last digit of", n);
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
