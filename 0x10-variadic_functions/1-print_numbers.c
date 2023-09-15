#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed
 * @separator: a character that separates the numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
