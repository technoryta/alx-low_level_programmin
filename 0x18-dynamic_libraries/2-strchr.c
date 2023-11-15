#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strchr - returns first occurance of c in string
* @s: character
* @c: character
* Return: Character
*/

char *_strchr(char *s, char c)
{
	unsigned long int i = 0;

	while (i < strlen(s) + 1)
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
