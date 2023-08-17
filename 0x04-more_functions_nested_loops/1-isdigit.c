#include "main.h"

/**
  * _isdigit - Checks if an input is a digit 0 ... 9
  * @c: The input to be checked
  *
  * Return: 1 for upper case or 0 for any else
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
