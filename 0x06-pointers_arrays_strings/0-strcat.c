#include "holberton.h"
/**
* *_strcat - function that concatenates two strings
* @dest: string with declared buffer to concatenate
* @src: string to concatenate
*/
char *_strcat(char *dest, char *src)
{

	int len, i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	len = len - 1;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return (dest);
}
