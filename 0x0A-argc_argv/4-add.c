#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checkString - checks for string
 * @s: string to be checked
 * Return: 1 if string else retrun 0
 */

int checkString(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - main entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char  *argv[])
{
	int i;
	int summation = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (checkString(argv[i]))
			{
				summation += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", summation);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}
