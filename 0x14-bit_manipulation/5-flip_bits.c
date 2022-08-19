#include "main.h"



/**
* flip_bits - of bits you would need to flip to get
* from one number to another
* @n: initial
* @m: final
*
* Return: number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	unsigned long int flip = n ^ m;

	while (flip)
	{
		if (flip & 1)
			counter++;

		flip >>= 1;
	}

	return (counter);
}
