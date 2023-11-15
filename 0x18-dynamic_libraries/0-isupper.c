#include "main.h"
#include <ctype.h>

/**
* _isupper - Chesks for uppercase letters
* @c: integer
* Return: Integer.
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
