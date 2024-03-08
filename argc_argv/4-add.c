#include "main.h"

/**
 * main - Entry point
 *
 * Description: Write a program that multiplies two numbers
 * @argc: integer
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int number1, number2, res;

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	else if (isdigit(*argv))
	{
	        res = number1 + number2;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
