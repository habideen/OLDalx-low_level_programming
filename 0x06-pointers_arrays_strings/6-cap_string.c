#include "main.h"

/**
 * *cap_string - capitalize first letter of each word
 * the remaining character for each word should be small case
 * @str: pointer
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
	char reg_found[] = ",\t;\n; .!?\"(){}";
	int flag, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;

		if (i == 0)
			flag = 1;
		else
		{
			for (j = 0; reg_found[j] != '\0'; j++)
			{
				if (str[i - 1] == reg_found[j])
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1)
			if (str[i] <= 'z' && str[i] >= 'a')
				str[i] -= ('a' - 'A');
	}

	return (str);
}
