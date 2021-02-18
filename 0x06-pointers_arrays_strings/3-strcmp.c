#include "holberton.h"
/**
* _strcmp - function that compares two strings
* @s1: first string
* @s2: second string
* Return: returns an integer indicating the result of comparison
*/
int _strcmp(char *s1, char *s2)
{
	int i, num = 0, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i; j++)
	{
		if(s1[j] == '\0' && s2[j] == '\0')
		{
			return (0);
		}
		if(s1[j] != s2[j])
		{
			break;
		}

	}
	num = s1[j] - s2[j];
	return (num);
}

