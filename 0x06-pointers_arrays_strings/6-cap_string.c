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
	if (s[i] >= 32 && s[i] <= 47)
	{
		if(s[i] == ' ')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		}

		else if (s[i] == '.' && s[i + 1] == '\n')
		{
			i = i + 2;
			s[i] = s[i] - 32;
		}
		else if (s[i] == '.' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			i = i + 1;
			s[i] = s[i] - 32;
		}
	}
	else if (s[i] == '\t')
	{
		i++;
		s[i] = s[i] - 32;
	}
	else if (s[i] >= 58 && s[i] <= 64)
	{
		i++;
		s[i] = s[i] - 32;
	}
	else if (s[i] >= 123 && s[i] <= 125)
	{
		i++;
		s[i] = s[i] - 32;
	}
	}
	return (s);
}
