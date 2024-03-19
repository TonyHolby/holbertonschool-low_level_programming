#include "3-calc.h"

/**
 * print_name - Entry point
 *
 * Description: a function that prints a name
 * @name: string
 * @f: function pointer to a string
 *
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	char *op = argv[2];
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return ((*get_op_func(op))(a, b));
}
