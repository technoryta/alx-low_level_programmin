#include <stdlib.h>
#include "dog.h"

/**
 * strlength - returns length of a string
 * @s: string whose length is to be determined
 *
 * Return: returns string length
 */
int strlength(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *strcopy - copies the string pointed to by src
 * @dest: pointer to where string is copied
 * @src: pointer to string to be copied
 *
 * Return: pointer to copy made
 */
char *strcopy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: pointer to the new dog if successful, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlength(name);
	len2 = strlength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (len1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (len2 + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}
	strcopy(dog->name, name);
	strcopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
