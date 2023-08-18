#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int x = 2;
	unsigned long n = 612852475143;

	while (x != n)
	{
		if (n % x == 0)
		{
			n = n / x;
		} else
		{
			x++;
		}
	}
	printf("%lu\n", n);

	return (0);
}
