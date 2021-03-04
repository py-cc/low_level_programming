#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - create buffer
* @b: size of buffer
*
*
* Return: void pointer to the allocates memory if buffer failed return exit()
Â* with a status value of 98
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
