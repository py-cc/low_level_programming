#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: NULL on failure or if width or height is < 0, else, the pointer to
 * the 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height); /* filas */

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(matrix + i) = malloc(sizeof(int) * width); /* colunmas */
		if (*(matrix + i) == NULL)
			return (NULL);

		for (j = 0; j < width; j++) /* desde 0 hasta el ancho */
		{
			*(*(matrix + i) + j) = 0; /* inicializarlo en 0 <<< */
		}
	}
	return (matrix);
}
