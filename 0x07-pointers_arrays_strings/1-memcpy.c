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

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
