#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concatenates two string with memory dinamic
* @s1: string base
* @s2: string to concatenates
* @n: number of bytes
*
* Return: NULL if buffer failure, or  pointer shall point to a newly
* allocated space in memory with succes
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, str, str2 = 0;
	char *buffer;

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	else
		s2 = "";

	if (n >= j)
	{
		buffer = malloc(i + j + 1 * sizeof(char));
		if (buffer == NULL)
			return (NULL);
		for (str = 0; str < i; str++)
			buffer[str] = s1[str];
		for (str2 = 0; str2 <= j; str2++)
			buffer[str + str2] = s2[str2];
		return (buffer);
	}

	buffer = malloc(n + i + 1 * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	for (str = 0; str < i; str++)
		buffer[str] = s1[str];
	for (str2 = 0; str2 < n; str2++)
		buffer[str + str2] = s2[str2];

	buffer[str2 + str] = '\0';
	return (buffer);
}
