#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the memory block memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem_block;

	mem_block = malloc(b);

	if (mem_block == NULL)
		exit(98);

	return (mem_block);
}
