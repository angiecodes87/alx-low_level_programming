#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of numbers to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (separator != NULL && i != n - 1)
	printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

