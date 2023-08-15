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
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar ('\n');
	}
}
