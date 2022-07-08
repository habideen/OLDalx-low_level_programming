#include "main.h"
#include <stdio.h>

/**
 * main - calls function that checks if argument is digit
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));


	return (0);
}
