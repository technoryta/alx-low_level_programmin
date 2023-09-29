#include "main.h"
/**
 * get_endianness - Checks for endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 **/
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *)&i;

	return ((*endian) ? 1 : 0);
}
