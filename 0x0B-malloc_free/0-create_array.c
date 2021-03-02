#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - create array as a dinamic memory
* @size: size of buffer
* @c: character with
* Return: Null with if size is 0 or if malloc failed. Return pointer to
* array if success
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{

		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
		else
		{
			return (NULL);
		}

	return (ptr);
	}
}
