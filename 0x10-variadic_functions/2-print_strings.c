#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: the separator to be printed between strings
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	i = n;

	while (i--)
	{
		str = va_arg(strings, char *);
		printf("%s%s",
				(str) ? str : "(nil)",
				(separator && i) ? separator : "");
	}
	putchar('\n');
	va_end(strings);
}

