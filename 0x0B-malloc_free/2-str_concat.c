#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: firts string
* @s2: second string
*
* Return: pointer to a new memory space storing two strings
* if it passed NULL return string empty or NULL in case malloc failed
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k, y, n;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}

	if (s2 != NULL)
	{
		for (k = 0; s2[k] != '\0'; k++)
		{
		}
	}

	n = k + i;

	ptr = malloc(n * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
		ptr[i + y] = s2[y];
	}

	ptr[i + k] = '\0';

	return (ptr);
}
