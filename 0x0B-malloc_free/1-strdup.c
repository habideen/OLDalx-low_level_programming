#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - this returns a pointer to a newly allocated
* space in memory, which contains a copy of the
* string given as a parameter.
* @str: String to be copied
* Return:  NULL if error or pointer to allocated space
*/

char *_strdup(char *str)
{
	char *_copy;
	int index, length;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		length++;
    	}
	_copy = malloc(sizeof(char) * (length + 1));

	if (_copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		_copy[index] = str[index];
	}

	_copy[length] = '\0';

	return (_copy);
}

