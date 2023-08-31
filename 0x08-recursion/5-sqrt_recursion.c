#include "main.h"

/**
 * _sqrt - finds the square root of a value
 * @test: value to test if it's the square root
 * @square: the square value
 * Return: the square root
 */

int _sqrt(int test, int square)
{
	if (test > square)
	{
		return (-1);
	}
	else if (test * test == square)
	{
		return (test);
	}

	return (_sqrt(test + 1, square));
}

/**
 * _sqrt_recursion - finds square root of a number recursively
 * @n: the square value
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
