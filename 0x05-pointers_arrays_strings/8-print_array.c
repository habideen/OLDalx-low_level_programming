#include "main.h"

/**
* print_array - function tht prints n element of array
* @a: array
* @n: number of elements
* Return: nothing
*/
void print_array(int *a, int n)
{
	int incr;

	for (inc = 0; incr < n ; incr++)
	{
		if (inc != n - 1)
			printf("%d, ", a[incr]);
		else
			printf("%d", a[incr]);
	}

	printf("\n");
}
