#include "holberton.h"
/**
 * _strcat -  concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate from
 *
 * Return: char string containing tha string appended
 */
char *_strcat(char *dest, char *src)
{

	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return (dest);
}
