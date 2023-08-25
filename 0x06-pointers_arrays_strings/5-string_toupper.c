#include "main.h"

/**
 * string_toupper - Converts a lowercase to uppercase
 *
 * @s: character to be converted
 *
 * Return: retuns uppercase letter
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
