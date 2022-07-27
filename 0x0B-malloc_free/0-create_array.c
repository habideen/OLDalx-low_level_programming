#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function to creates an array of chars,
* and initializes it with a specific char.
* @size: Size of the array
* @c: Character to insert
* Return: NULL if size is zero/fails,
* pointer to array if everything is normal.
*/
char *create_array(unsigned int size, char c)
{
	char *this_array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	this_array = malloc(sizeof(char) * size);

	if (this_array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		this_array[index] = c;
	}

	return (this_array);
}
