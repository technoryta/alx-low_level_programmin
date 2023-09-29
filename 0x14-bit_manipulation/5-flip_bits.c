#include "main.h"
/**
 * flip_bits - Counts the number of bits to
 * flip to get from one number to another.
 * @n: Number to be flipped
 * @m: The number to flip n towards
 *
 * Return: Number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, count = 0;

	while (XOR > 0)
	{
		count += (XOR & 1);
		XOR >>= 1;
	}
	return (count);
}
