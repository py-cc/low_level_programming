#include "holberton.h"
#include <stdio.h>
/**
* _memset - fills memory with a constant byte
* @s: pointer to array
* @b: constant char
* @n: n bytes the memory
* Return: pointer to the memory area
*/
char *_menset(char *s, char b, unsigned int n)
{

	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
