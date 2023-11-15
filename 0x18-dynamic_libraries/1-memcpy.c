#include "main.h"

/**
* _memcpy - copies n bytes from src to dest
* @dest: character
* @src: character
* @n: unsigned integer
* Return: Character
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
