#include "main.h"
/**
 * *_strncat - function that concatenates n bytes of
 * two strings where *src does not end with \n
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void nothing is returned
*/

char *_strncat(char *dest, char *src, int n)
{

int dest_length, x;
for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
;

for (x = 0; x < n && src[x] != '\0'; x++)
	dest[dest_length + x] = src[x];

/*should end with a end of string char*/
dest[dest_length + x] = '\0';

return (dest);
}
