#include "main.h"
#include <string.h>
#include <stddef.h>

/**
* _strstr - returns first occurance of c in string
* @haystack: character
* @needle: character
* Return: Character
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (!haystack || !needle)
		return (NULL);
	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(needle + j) != '\0')
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
			j++;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
