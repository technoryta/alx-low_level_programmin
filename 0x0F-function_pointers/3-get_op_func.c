#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the correct function
 * @s: function s
 * Return: an int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	j = 0;
	while (ops[j].f != NULL)
	{
		if (*s == *(ops[j].op) && s[1] == '\0')
			return (ops[j].f);
		j++;
	}

	printf("Error\n");
	exit(99);
}
