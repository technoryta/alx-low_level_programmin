#include "main.h"

/**
* _memset - sets / fills memory with const byte
* @s: character
* @b: character
* @n: unsigned integer
* Return: Character
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
