#include "main.h"
#include <string.h>

/**
* _strcmp - compares strings
* @s1: charater
* @s2: character
* Return: character
*/

int _strcmp(char *s1, char *s2)
{
	int diff;
	int i = 0;

	while ((*(s1 + i)) != '\0' || (*(s2 + i)) != '\0')
	{
		diff = (*(s1 + i)) - (*(s2 + i));
		if (diff)
		{
			break;
		}
		i++;
	}
	return (diff);
}
