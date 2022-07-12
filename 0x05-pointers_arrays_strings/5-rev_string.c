#include "main.h"

/**
* rev_string - function to reverse a string
* @s: String to reverse
* Return: Nothing
*/
void rev_string(char *s)
{
	int x = 0, len;

	len = _strlen(s) - 1;

	while (len > x)
	{
		swap_char(s + len, s + x);
		x++;
		len--;
	}
}



/**
 *_strlen - function to returns the length of a string
 * @s: string parameter
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



/**
*swap_char - function to swap two characters
*@a: first character
*@b: second character
*Return: nothing
*/
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
