#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: function parameter
 *@n: function parameter
 *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
