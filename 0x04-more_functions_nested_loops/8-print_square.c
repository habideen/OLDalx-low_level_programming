#include "main.h"

/**
 * print_square - function to print a square
 * @n : number of # to printe
 * Return: nothing (void)
 */

void print_square(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;

		while (j < n)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}

	if (i == 0)
		_putchar('\n');
}
