#include "function_pointers.h"

/**
* int_index - searche for an integer
* @array: Array pointer containing elements
* @size: array size
* @cmp: compare value function
*
* Return: returns -1 if no element match
* or when size is less than zero
* return pointer to the first corresponding element
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int array_index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; array_index < size; array_index++)
	{
		if (cmp(array[array_index]) != 0)
			return (array_index);
	}

	return (-1);
}
