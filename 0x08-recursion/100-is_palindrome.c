#include "main.h"

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
	int index = 0;
	int length = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, length, index));
}



/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlen(s + length);
	}

	return (length);
}



/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @length: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);

	if (s[index] == s[length - index - 1])
		return (check_palindrome(s, length, index + 1));

	return (0);
}
