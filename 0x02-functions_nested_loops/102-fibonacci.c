#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: returns 0
 */

int main(void)
{
	int count = 2;
	long int x = 1;
	long int y = x + 1;
	long int z = x + y;

	printf("%ld, %ld, ", x, y);
	while (count < 50)
	{
		printf("%ld", z);
		count++;
		x = y;
		y = z;
		z = x + y;
		if (count < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
