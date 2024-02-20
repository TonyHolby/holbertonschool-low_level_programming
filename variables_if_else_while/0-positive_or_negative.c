#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: prints the value of n and if it is negative, null or positive
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int main()
	{
		int n;

		if (n < 0)
		{
			printf("%d", n);
			printf("is negative\n");
		}
		else if (n == 0)
		{
			printf("%d", n);
			printf("is zero\n");
		}
		else if (n > 0)
		{
			printf("%d", n);
			printf("is positive\n");
		}
	}

	return (0);
}
