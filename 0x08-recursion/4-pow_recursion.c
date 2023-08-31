#include "main.h"

/**
 * _pow_recursion - raises an integer to a power
 *
 * @x: base integer
 * @y: exponent integer
 *
 * Return: -1 if y is lower than 0 else returns power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
