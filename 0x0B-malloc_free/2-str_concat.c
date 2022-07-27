#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings.
* and return a new pointer to the result
* @s1: First string
* @s2: Second string
* Return: NULL in case of failure , but pointer to new string in
* case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_result;
	int index, concat_index = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_result = malloc(sizeof(char) * len);

	if (concat_result == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_result[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_result[concat_index++] = s2[index];

	return (concat_result);
}
