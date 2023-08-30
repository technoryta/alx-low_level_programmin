#include "main.h"

/**
 * factorial - evaluates the factorial of an integer
 *
 * @n: integer whose factoirial is to be found
 *
 * Return: -1 if n is less than 0, else returns factorial
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
