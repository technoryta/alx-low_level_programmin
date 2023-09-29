#include "main.h"
/**
 * clear_bit - Sets value of a bit at a given index to 0
 * @n: Pointer to the number
 * @index: The index where bit is to be changed to 1
 *
 * Return: 1, otherwise -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = ~(1 << index) & *n;

	return (1);
}
