#include "main.h"

/**
 * get_bit - Gets the value of a bit at an index
 * @n: Number in base 2
 * @index: The index where bit is to be retrieved
 *
 * Return: Index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
