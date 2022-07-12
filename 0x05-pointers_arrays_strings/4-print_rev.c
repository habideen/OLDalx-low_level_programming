#include "main.h"

/**
* print_rev - this funtion prints a string in reverse
* @s: string to print
* Return: inc
*/
void print_rev(char *s)
{
	int len = 0, index = 0;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}



/**
 *_strlen - function to return the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
