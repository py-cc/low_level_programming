#include "holberton.h"
/**
* _strstr - locates a substring
* @haystack: string to find ocurrrence
* @needle: string ocurrence
*
* Return: a pointer to the beginning of the located substring or NULL if the
* if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, x;

	for (x = 0; needle[x] != '\0'; x++)
	{
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
		}
		if (j >= x)
		{
			if(needle[j] != '\0')
			{
				j = j - 1;
			}
			i = i - j;
			return (haystack + i);
		}
	}
	return ('\0');
}
