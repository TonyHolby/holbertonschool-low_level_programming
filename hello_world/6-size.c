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
	printf("int=%lu bytes\n", sizeof(char));
	printf("int=%lu bytes\n", sizeof(int));
	printf("int=%lu bytes\n", sizeof(long));
	printf("int=%lu bytes\n", sizeof(long long int));
	printf("int=%lu bytes\n", sizeof(float));
	return (0);
}
