#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - duplicate of the string str
* @str: pointer to a string
*
* Return: NULL if str is NULL and NULL if insufficient memory was available
* On success, return a pointer to the duplicated string.
*
*/
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
		}

		ptr = malloc(i * sizeof(char) + 1);

		for (j = 0; j <= i; j++)
		{
			ptr[j] = str[j];
		}

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			return (ptr);
		}
	}
	else
	{
		return (NULL);
	}
}
