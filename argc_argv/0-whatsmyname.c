#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints its name, followed by a new line
 * @argc: integer
 * @argv: array
 *
 * Return: an integer
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
