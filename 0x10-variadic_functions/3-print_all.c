#include "variadic_functions.h"

/**
 * print_c - prints char
 * @a: list input
 * Return: always 0
 */
int print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
	return (0);
}
/**
 * print_i - prints int
 * @a: list input
 * Return: always 0
 */
int print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
	return (0);
}
/**
 * print_f - prints float
 * @a: list input
 * Return: always 0
 */
int print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
	return (0);
}
/**
 * print_s - prints string
 * @a: list input
 * Return: always 0
 */
int print_s(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/**
 * print_all - prints all format of input
 * @format: format of input
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep1 = "";
	char *sep2 = ", ";
	va_list ap;
	strucprint ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", sep1);
				ops[j].f(ap);
			}
			j++;
		}
		sep1 = sep2;
		i++;
	}
	printf("\n");
	va_end(ap);
}
