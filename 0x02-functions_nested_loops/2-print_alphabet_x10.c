#include "main.h"

/**
 * print_alphabet_x10 - Function 10 times alphabets
 *
 * Return: Nothing
 *
 */

void print_alphabet_x10(void)
{
	char i;

	for (i = 'a' * 10; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}
