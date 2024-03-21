#include "3-calc.h"

/**
 * main - Entry point
 *
 * Description: a function that prints a name
 * @argc: number of arguments
 * @argv: string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (op == NULL || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(op))(a, b));

	return (0);
}
