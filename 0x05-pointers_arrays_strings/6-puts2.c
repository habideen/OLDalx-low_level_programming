#include "main.h"

/**
 * puts2 - function to  prints part of a string
 * @str: string to be printed
 * Return: void
 **/
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);

		++x;
	}

	_putchar('\n');
}
