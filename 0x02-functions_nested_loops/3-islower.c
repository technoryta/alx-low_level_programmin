#include "main.h"
/**
 * _islower - checks if character is lower case
 *
 * @character: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */

int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
