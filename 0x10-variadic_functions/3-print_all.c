#include "variadic_functions.h"

/**
 * print_all - prints all the arguments in any format
 * @format: format of argument
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j, separator = 0;
	char *str;
	char c_args[] = "cifs";
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (c_args[j])
		{
			if (format[i] == c_args[j] && separator)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), separator = 1;
				break;
			case 's':
				str = va_arg(ap, char *), separator = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	va_end(ap), printf("\n");
}
