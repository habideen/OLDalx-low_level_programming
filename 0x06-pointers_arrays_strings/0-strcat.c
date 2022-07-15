#include "main.h"

/**
 * _strcat - concatenates @src with @dest
 * and store result in @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * description: This function appends the src string
 * to the dest string, overwriting the terminating null
 * byte (\0) at the end of dest, and then adds a terminating
 * null byte
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = -1, index;

	for (index = 0; dest[index] != '\0'; index++)
	;

	do {
		i++;
		dest[index] = src[i];
		index++;
	} while (src[i] != '\0');

	return (dest);
}
