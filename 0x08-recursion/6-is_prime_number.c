#include "main.h"

/**
 * helper_division - tests whether the number is divisible
 * @n: the number being tested
 * @div: the divisor
 * Return: result
 */

int helper_division(int n, int div)
{
	if (n % div == 0 && n != div)
		return (0);
	if (n % div != 0 && div < n)
		return (helper_division(div + 1, n));
	return (1);
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: the number being tested
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n < 2)
		return (0);
	return (helper_division(n, div));
}
