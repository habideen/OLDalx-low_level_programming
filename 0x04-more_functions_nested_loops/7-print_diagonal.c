#include "main.h"
/**
*print_diagonal - function to  prints a diagonal
*@n: is the only parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	int i = 0, x;

	while (i < n && n > 0)
	{
		x = 0;

		while (x < i)
		{
			_putchar(' ');
			x++;
		}

		_putchar('\\');
		_putchar('$');
		_putchar('\n');

		i++;
	}

	if (i == 0)
	{
		_putchar('$');
		_putchar('\n');
	}
}
