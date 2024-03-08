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
	int i, j, res;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		res += atoi(argv[i]);
	}

	printf("%d\n", res);

	return (0);
}
