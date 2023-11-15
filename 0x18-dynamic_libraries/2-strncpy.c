#include "main.h"
#include <string.h>

/**
* _strncpy - copies strings
* @dest: charater
* @src: character
* @n: integer
* Return: character
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j < (int)strlen(src))
			*(dest + j)  = *(src + j);
		else
			*(dest + j) = '\0';
	}
	return (dest);
}
