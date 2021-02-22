#include "holberton.h"
/**
* _strchr - that locates a character in a string
*
* @s: pointer to string
* @c: character evaluated
*
* Return: pointer to the first occurrence of the character
*/
char *_strchr(char *s, char c)
{
	int a, i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (a = 0; a <= i; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return ('\0');
}
