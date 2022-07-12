#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to print
 * Description: prints a string
 * On success: returns the number of characters printed to stdout
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
