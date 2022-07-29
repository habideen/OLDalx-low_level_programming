#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in array
* @max: lagrest value in array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int x, y = 0;
	int *mem_block;

	if (min > max)
		return (NULL);

	mem_block = malloc(sizeof(*mem_block) * ((max - min) + 1));

	if (mem_block != NULL)
	{
		for (i = min; x <= max; x++)
		{
			mem_block[y] = x;
			y++;
		}

		return (mem_block);
	}
	else
		return (NULL);
}
