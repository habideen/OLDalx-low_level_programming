#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate to s1.
*
* Return: If the function fails - NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int length = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
	length++;

	concat_string = malloc(sizeof(char) * (length + 1));

	if (concat_string == NULL)
		return (NULL);

	length = 0;

	for (index = 0; s1[index]; index++)
		concat_string[length++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat_string[length++] = s2[index];

	concat_string[length] = '\0';

	return (concat_string);
}
