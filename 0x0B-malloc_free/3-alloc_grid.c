#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid -"nested loop to make grid
 * @width: width input
 * @height: height input"
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
	int **b;
	int x, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);

	if (b == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		b[x] = malloc(sizeof(int) * width);

		if (b[x] == NULL)
		{
			for (; x >= 0; x--)
				free(b[x]);

			free(b);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
			b[x][z] = 0;
	}

	return (b);
}
