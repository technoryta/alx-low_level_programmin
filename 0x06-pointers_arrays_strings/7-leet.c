#include "main.h"

/**
 * leet - A function that encodes a string in 1337
 *
 * @s: string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	int j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}
		}
	}

	return (s);
}
