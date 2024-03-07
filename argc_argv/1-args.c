#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints the number of arguments passed into
 * it followed by a new line
 * @argc: integer
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
