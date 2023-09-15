#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list ap;
	int i;

	sum = 0;
	var_start(ap, n);
	if (n > 0)
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	var_end(ap);

	return (sum);
}
