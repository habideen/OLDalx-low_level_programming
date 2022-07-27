#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a
* 2 dimensional array of integers.
* @width: width of array
* @height: height of array
*
* Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int x, y;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array != NULL)
	{
		for (x=0; x < height; x++)
		{
			array[x] = (int *) malloc(sizeof(int) * width);

			if (array[x] != NULL)
			{
				for (y = 0; y < width; y++)
					array[x][y] = 0;
			}
			else
			{
				while (x >= 0)
				{
					free(array[x]);
					x--;
				}
				
				free(array);
				return (NULL);
			}
		}

		return (array);
	}
	else
		return (NULL);
}
