#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: count of args passed to the function
* @av:array of arguments
*
* Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	char *string_result = NULL;
	int x = 0, i = ac, j, temp = 0, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (len(av[ac]) + 1);
	string_result = (char *) malloc(sum + 1);

	if (string_result != NULL)
	{
		while (x < i)
		{
			for (j = 0; av[x][j] != '\0'; j++)
				string_result[j + temp] = av[x][j];

			string_result[temp + j] = '\n';
			temp += (j + 1);
			x++;
		}
		string_result[temp] = '\0';

		return (string_result);
	}
	else
		return (NULL);
}




/**
*len - returns length of string
*@str: string counted
*Return: returns the length
*/

int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}

	return (len);
}
