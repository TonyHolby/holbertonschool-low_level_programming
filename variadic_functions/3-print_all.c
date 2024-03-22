#include "variadic_functions.h"

/**
 *
 *
 */

int print_c(va_list args)
{
        printf("%c", va_arg(args, int));

        return (0);
}

/**
 *
 *
 */

int print_i(va_list args)
{
        printf("%d", va_arg(args, int));

        return (0);
}

/**
 *
 *
 */

int print_s(va_list args)
{
        char *string = va_arg(args, char *);

        if (string == NULL)
        {
                printf(("nil"));
                return (0);
        }

        printf("%s", string);

        return (0);
}

/**
 *
 *
 */

int print_f(va_list args)
{
        printf("%f", va_arg(args, double));

        return (0);
}

/**
 * print_all - Entry point
 *
 * Description: a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *separator = NULL;
	va_list args;

	sp_t type[] = {
                {'c', print_c},
                {'i', print_i},
                {'f', print_f},
                {'s', print_s},
		{'\0', NULL}
                };

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (type[j].sp != '\0')
		{
			if (type[j].sp == format[i])
			{
				printf("%s", separator);
				type[j].f(args);
				separator = ", ";
			}

			j++;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}

