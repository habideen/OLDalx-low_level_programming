#include "main.h"

/**
* swap_int - function to swap two integers
* @a: first integer
* @b: second integer
* Return: nothing (void)
*/
void swap_int(int *a, int *b)
{
	int temp_var = *a;
	*a = *b;
	*b = temp_var;
}
