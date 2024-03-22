#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct sp - Struct sp
 *
 * @sp: The type of argument
 * @f: The function associated
 */
typedef struct sp
{
	char sp;
	int (*f)(va_list);
} sp_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_i(va_list args);
int print_f(va_list args);

#endif
