#include "function_pointers.h"
/**
 * array_iterator - iterates through an array
 * @array: array to iterate through
 * @size: size of array
 * @action: pointer to a function that takes action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
