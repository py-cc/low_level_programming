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
	if (*s != '\0')
	{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	}
	else
	{
		return ('\0');
	}

	return ('\0');
}
