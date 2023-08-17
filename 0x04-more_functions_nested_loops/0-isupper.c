#include "main.h"

/**
  * _isupper - Checks if a letter is upper case
  * @c: The letter to be checked
  *
  * Return: 1 for upper case or 0 for any else
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
