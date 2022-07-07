#include "main.h"
/**
*_isalpha - function that checks for alphabetic character
*@c: character to be verified
*Return: return 0 if c is not letter or 1 if c is letter
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);

return (0);
}
