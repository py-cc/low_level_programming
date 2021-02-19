#include "holberton.h"
/**
* leet - function that encodes a string into 1337 (leet code)
* @s: pointer to a string
*
* Return: pointer to string
*/
char *leet(char *s)
{
	int y = 0;
	char *end = s;
	char *lett = "aAeEoOtTlL";
	char *numb = "4433007711";

	while (*s)
	{
		for (y = 0; lett[y]; y++)
		{
			if (*s == lett[y])
			{
				*s = numb[y];
			}
		}
		s++;
	}
	return (end);
}
