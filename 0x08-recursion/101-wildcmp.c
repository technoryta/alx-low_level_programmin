#include "main.h"

/**
 * wildcmp - function that compares two strings and returns 1
 * if they are identical, otherwise it returns 0
 *
 * @s1: the first string
 * @s2: the second string which may contain the special character "*"
 *
 * Return: retruns 1 if string are identical, otherwise it returns 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
