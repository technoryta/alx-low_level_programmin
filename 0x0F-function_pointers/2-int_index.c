#include "function_pointers.h"
/**
 * int_index - returns array index
 * @array: array to search through
 * @size: size of array
 * @cmp: function that does the comparison
 * Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
