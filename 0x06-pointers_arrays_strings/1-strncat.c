#include "holberton.h"
/**
* *_strncat - function tha concatenates two strings
* @dest: string with declared buffer to concatenate
* @src: string to concatenate
* @n: amount of bytes to concatenate
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return (dest);
}
