#include "main.h"



/**
* get_endianness - checks whether a machine is 
* big a endian or little
*
* Return: 1 if little endian, 0 if little
*/

int get_endianness(void)
{
	char *endian = (char *)&check;
	unsigned int check = 1;

	if (*endian)
		return (1);

	return (0);
}
