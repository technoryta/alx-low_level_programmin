#include "main.h"

/**
 * print_line - prints a line on the screen
 *
 * @n: detrmines the length of line based on times of _
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
