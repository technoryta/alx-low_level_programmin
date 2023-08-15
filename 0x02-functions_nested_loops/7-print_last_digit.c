#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - function prints last digit of a number
 *
 * @n: integer whose last digit is to be printed
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	return (_abs(n % 10));
}
