#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - finds alphabets
* @c: interger
* Return: returns 1 if alphabet else 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
