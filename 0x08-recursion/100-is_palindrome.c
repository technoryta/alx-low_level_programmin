#include "main.h"

/**
 * length - finds length of the string
 * @s: string to be tested
 * Return: length of string
 */

int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * helper_function - length of the string by index
 * @i: integer
 * @s: string
 * Return: int value of the result
 */

int helper_function(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		return (helper_function(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - checks if characters from either sides are equal
 * @s: string
 * Return: boolean
 */

int is_palindrome(char *s)
{
	int i = 1;

	return (helper_function(i, s));
}
