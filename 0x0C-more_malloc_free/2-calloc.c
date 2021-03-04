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

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * sizeof(size));
	if (buffer == NULL)
		return (NULL);

	return (buffer);
}
