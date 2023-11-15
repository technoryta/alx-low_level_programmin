#include "main.h"
#include <string.h>

/**
* _strncat - concanates strings
* @dest: charater
* @src: character
* @n: integer
* Return: character
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; (*(dest + i)) != '\0'; i++)
	;

	for (j = 0; (*(src + j)) != '\0' && j < n; j++)
	{
		*(dest + i)  = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
