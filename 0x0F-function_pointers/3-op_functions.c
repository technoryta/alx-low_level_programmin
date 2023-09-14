#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds 2 integers
 * @a: first int
 * @b: second int
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts 2 integers
 * @a: first int
 * @b: second int
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies
 * @a: first integer
 * @b: second integer
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides
 * @a: first int
 * @b: second int
 * Return: the result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates modulo
 * @a: first int
 * @b: second int
 * Return: the result of modulo
 */

int op_mod(int a, int b)
{
	return (a % b);
}
