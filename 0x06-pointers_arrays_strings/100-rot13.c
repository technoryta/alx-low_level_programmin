#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{
	char actual[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encoding[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; actual[j] != '\0'; j++)
		{
			if (s[i] == actual[j])
			{
				s[i] = encoding[j];
				break;
			}
		}
	}
	return (s);
}
