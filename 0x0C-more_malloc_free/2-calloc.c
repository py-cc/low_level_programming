#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number elements
* @size: size of elements
*
* Return: NULL if buffer failure and if number o size of 0.
* Success or pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		buffer[i] = 0;
	}
	return (buffer);
}
