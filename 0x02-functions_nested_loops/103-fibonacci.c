#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: returns 0
 */

int main(void)
{
	int count = 0;
	long int x = 1;
	long int y = x;
	long int z = x + y;

	while (z < 4000000)
	{
		if (z % 2 == 0)
		{
			count += z;
		}
		x = y;
		y = z;
		z = x + y;
	}
	printf("%d\n", count);
	return (0);
}
