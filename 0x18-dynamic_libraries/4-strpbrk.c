#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strpbrk - returns first occurance of c in string
* @s: character
* @accept: character
* Return: Character
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < (int)strlen(s); i++)
	{
		for (j = 0; j < (int)strlen(accept); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
			}
		}
	}
	return (NULL);
}
