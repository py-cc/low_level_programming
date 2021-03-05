#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum integer to store.
 * @max: maximum integer to store.
 *
 * Return: NULL if min > max or malloc fails, else, return
 * the pointer to the newly created array
 */
int *array_range(int min, int max)
{

	unsigned int size, i;
	int *buffer;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	buffer = malloc(size * sizeof(int));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		buffer[i] = min++;
	}
	return (buffer);
}
