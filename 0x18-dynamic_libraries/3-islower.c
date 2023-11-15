#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - checks for lowercase
* @c: integer type
* Return: returns 1 for lowercase and 0 otherwise
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
