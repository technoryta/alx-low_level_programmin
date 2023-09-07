#include "main.h"
#include <stdlib.h>
/**
 * counter - counts word
 * @word: word count number
 * @len: length of word
 * @str: string to be parsed
 * @s: array assigned
 * Return: char value
 */
char **counter(int word, int len, char *str, char **s)
{
	int i, j, k;

	j = 0;
	for (i = 0; i < word; i++)
	{
		k = 0;
		for (; j < len; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
			{
				s[i][k] = str[j];
				k++;
			}
			if (j != 0 && str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				break;
			}
		}
		s[i][k + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}
/**
 * strtow - splits string to words
 * @str: string to split
 * Return: return character
 */
char **strtow(char *str)
{
	int len, i, j, k, word, size;
	char **s;

	if (str == NULL)
		return (NULL);
	len = 0;
	word = 0;
	while (str[len] != '\0')
	{
		if (str[0] != ' ')
		word++;
		if (str[len] != ' ' && str[len - 1] == ' ' && len != 0)
			word++;
		len++;
	}
	s = (char **)malloc(sizeof(char *) * word + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < word; i++)
	{
		size = 0;
		for (; j < len; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
				size++;
			if (str[j] == ' ' && size > 0)
				break;
		}
		printf("%d\n", size);
		s[i] = (char *)malloc(sizeof(char) * size + 1);
		if (s[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(s[k]);
			free(s);
		}
	}
	s = counter(word, len, str, s);
	return (s);
}

