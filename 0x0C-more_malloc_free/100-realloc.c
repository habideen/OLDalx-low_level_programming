#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory block previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to  new memory block address
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_mem_block;
	unsigned int x;

	if (ptr == NULL)
	{
		temp_mem_block = malloc(new_size);

		return (temp_mem_block);
	}

	else if (new_size == old_size)
		return (ptr);

	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	else
	{
		temp_mem_block = malloc(new_size);
		if (temp_mem_block != NULL)
		{
			for (x = 0; x < min(old_size, new_size); x++)
				*((char *)temp_mem_block + x) = *((char *) ptr + x);

			free(ptr);

			return (temp_mem_block);
		}
		else
			return (NULL);
	}
}
