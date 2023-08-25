#include "main.h"
/**
 *_strncat - Concatenates two strings
 *
 *@dest: destination string
 *@src: source string
 *@n: Maximum number of letters from source string
 *
 * Return: returns destination string
 */

char *_strncat(char *dest, char *src, int n)
{
		int i;
		int j;

		for (i = 0; dest[i] != '\0'; i++)
		{
		}
		for (j = 0; j < n && src[j] != '\0'; j++)
		{
			dest[i + j] = src[j];
		}
		dest[i + j] = '\0';

		return (dest);
}
