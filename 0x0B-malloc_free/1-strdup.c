#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: thestring duplicate
 */
char *_strdup(char *str)
{
	int i;
	int count = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	p = malloc(sizeof(char) * count + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		p[i] = str[i];

	return (p);

}
