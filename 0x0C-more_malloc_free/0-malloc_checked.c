#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked -
* @b: size of buffer
*
*
* Return:
*/
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
	{
		exit(98);
	}

	return (buffer);
}
