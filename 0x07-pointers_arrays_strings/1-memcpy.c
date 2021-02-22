#include "holberton.h"
/**
* _memcpy - copies memory area
* @dest: array where the data is stored
* @src: array content bytes
* @n: n bytes that has to be copies
*
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (a = 0; a < n; a++)
	{
		dest[i + a] = src[a];
	}

	return (dest);
}
