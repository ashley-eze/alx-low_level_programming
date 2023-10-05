#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **call;
	int a, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	call = malloc(sizeof(int *) * height);

	if (call == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		call[a] = malloc(sizeof(int) * width);

		if (call[a] == NULL)
		{
			for (; a >= 0; a--)
				free(call[a]);

			free(call);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (z = 0; z < width; z++)
			call[a][z] = 0;
	}

	return (call);
}
