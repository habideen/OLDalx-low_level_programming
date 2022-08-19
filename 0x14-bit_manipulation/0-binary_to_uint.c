#include "main.h"



/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary number as a string
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, base = 1;
	unsigned int decimal = 0;

	if (!is_valid_string(b))
		return (0);

	while (b[len] != '\0')
		len++;

	while (len)
	{
		decimal += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}

	return (decimal);
}




/**
 * is_valid_string - checks if a string is binary
 * @b: string parameter
 *
 * Return: 1 if string is valid, else 0
 */
int is_valid_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		b++;

	}

	return (1);
}
