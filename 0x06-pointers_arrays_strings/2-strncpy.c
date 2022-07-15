#include "main.h"

/**
 * *_strncpy - copy from one location to another
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: int
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
