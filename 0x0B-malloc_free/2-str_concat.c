#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *join;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	while (s2[j] != '\0')
	{
		i++;
		len2++;
	}

	join = malloc(sizeof(char) * (len1 + len2 + 1));
	if (join == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		join[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		join[j + len1] = s2[j];
	}
	join[j + len1] = '\0';
	return (join);
}
