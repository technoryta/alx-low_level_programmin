#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _abs - Prints the absolute value of numbers
* @n: integer
* Return: Always Zero
*/

int _abs(int n)
{

	/*v = abs(n);*/
	putchar(n < 0 ? '0' - (n % 10) : '0' + (n % 10));
	return (0);
}
