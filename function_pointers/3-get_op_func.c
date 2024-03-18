#include "calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: operator passed as argument to the program
 *
 * Return: the pointer to the function that corresponds to the operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	if (*s != "+" || *s != "-" || *s != "*" || *s != "/" || *s != "%")
	{
		m
	}

	while ()
	{
		m
	}

	if (*s == "+")
	{
		return (op_add(a, b));
	}
	else if (*s == "-")
	{
		return (op_sub(a, b));
	}
	else if (*s == "*")
	{
		return (op_mul(a, b));
	}
	else if (*s == "/")
	{
		return (op_div(a, b));
	}
	else if (*s == "%")
	{
		return (op_mod(a, b));
	}
}
