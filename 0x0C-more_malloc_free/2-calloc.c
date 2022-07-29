#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory using malloc and initialize it to zero
* @nmemb: number of elements
* @size: size of the memory block to be allocated
*
* Return: poiner to the address of the memory block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_block;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mem_block = malloc(size * nmemb);

	if (mem_block != NULL)
	{
		for (i = 0; i < (size * nmemb); i++)
			mem_block[i] = 0;

		return (mem_block);
	}
	else
		return (NULL);
}
