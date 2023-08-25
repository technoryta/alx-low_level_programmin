#include "main.h"
/**
 *_strncpy - Copies a string
 *
 *@dest: destination place
 *@src: source string to be copied
 *@n: Maximum number of letters from source string
 *
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	if (i < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
