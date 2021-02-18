#include "holberton.h"
/**
* _strcmp - function that compares two strings
* @s1: first string
* @s2: second string
* Return: returns an integer indicating the result of comparison
*/
int _strcmp(char *s1, char *s2)
{
	int i, num = 0;

		for (i = 0; s1[i] != '\0'; i++)
		{

			if (s1[i] == s2[i])
			{
				return (0);
			}
			if (s1[i] < s2[i])
			{
				num = s1[i] - s2[i];
				return (num);
			}
			else if (s1[i] > s2[i])
			{
				num = s1[i] - s2[i];
				return (num);
			}

		}

	return (0);
}
