#include "main.h"
#include <ctype.h>

/**
* _isdigit - Chesks for digits
* @c: integer
* Return: Integer.
*/

int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
