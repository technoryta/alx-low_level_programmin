#include "main.h"

/**
 * _indexOf - returns boolean if special character
 *
 * @a: character to return
 *
 * Return: returns 1 or 0
 */

int _indexOf(char a)
{
	int i;
	char special[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (special[i] == a)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes the string
 *
 * @s: string to be modified
 *
 * Return: the string with each word capitalized
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && (_indexOf(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}
