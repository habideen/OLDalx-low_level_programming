#include "main.h"

/**
* factorial - calculate the factorial of a number
* @n: the number to find the factorial of
* Return: the factorial of the number
*/

int factorial(int n)
{
	//base case
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
