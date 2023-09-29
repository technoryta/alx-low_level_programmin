#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Points to a string of binary 0 and 1
 *
 * Return: Number in int
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, multiplier = 1, base = 2;
	int lent;

	if (b == NULL)
		return (0);

	for (lent = 0; b[lent];)
		lent++;

	for (lent -= 1; lent >= 0; lent--)
	{
		if (b[lent] != '0' && b[lent] != '1')
			return (0);

		converted += (b[lent] - '0') * multiplier;
		multiplier *= base;
	}

	return (converted);
}
