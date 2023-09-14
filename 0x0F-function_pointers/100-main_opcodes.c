#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
 * @argc: parameter count
 * @argv: array of parameters
 * Description: program prints opcodes in hexadecimal
 * Return: 0 in succes
 */
int main(int argc, char *argv[])
{
	int i, count;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = atoi(argv[1]);
	if (count < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < count; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < count - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
