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
	unsigned int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);

	}
	return ('\0');
}
