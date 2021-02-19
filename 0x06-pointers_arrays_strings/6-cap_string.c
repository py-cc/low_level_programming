#include "holberton.h"
/**
* cap_string - function that capitalizes all words of a string
* @s: pointer to a string
*
* Return: pointer to string
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			if (i == 0)
				continue;
			else
				s[i] = s[i] + 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
		    || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		    || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
		    || s[i] == '}')
		{
			i++;
			if (s[i] == ' ' || s[i] == '\n')
				i++;
			if (s[i] >= 96 && s[i] <= 123)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
