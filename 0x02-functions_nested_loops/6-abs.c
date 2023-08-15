#include "main.h"

/**
 * _abs - finds absolute value of a number
 *
 * @n: integer whose absolute value is to be found
 * Return: returns absolute value
 *
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
