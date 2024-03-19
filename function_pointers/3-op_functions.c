#include "3-calc.h"

/**
 * op_add - addition of the numbers a and b
 * @a: integer
 * @b: integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction of the numbers a and b
 * @a: integer
 * @b: integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of the numbers a and b
 * @a: integer
 * @b: integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of the numbers a by b
 * @a: integer
 * @b: integer
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of the numbers a by b
 * @a: integer
 * @b: integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
