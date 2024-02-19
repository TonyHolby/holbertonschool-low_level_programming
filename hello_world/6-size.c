#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the size of various types on the computer it is
 * compiled and run on
 *
 * Return: 0
 */
int main(void)
{
	printf("char=%lu bytes\n", sizeof(char));
	printf("int=%lu bytes\n", sizeof(int));
	printf("long=%lu bytes\n", sizeof(long));
	printf("long long int=%lu bytes\n", sizeof(long long int));
	printf("float=%lu bytes\n", sizeof(float));
	return (0);
}
