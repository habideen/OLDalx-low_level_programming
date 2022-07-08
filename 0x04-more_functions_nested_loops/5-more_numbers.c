#include "main.h"

/**
 * print_most_numbers - prints numbers 0-14 10 times
 * Return:0
 */

void print_most_numbers(void)
{
	char x= 0;

	while (x<= 9)
	{
		if (x!= 2 && x!= 4)
		{
			_putchar('0' +x);
		}

		x++;
	}
	_putchar('\n');
}
