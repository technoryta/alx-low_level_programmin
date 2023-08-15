#include "main.h"

/**
 * print_alphabet - Function prints a to z
 *
 * Return: Nothing
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}
