#include "main.h"

/**
* _strcpy - function that copy paste string
* @dest: destination
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int incr = 0;

	while (*(src + incr) != '\0')
	{
		*(dest + incr) = *(src + incr);
		incr++;
	}

	*(dest + incr) = '\0';

	return (dest);
}
