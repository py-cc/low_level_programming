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
	unsigned int a = 0, b = 0;

	while (haystack != '\0')
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b] != '\0')
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);

	}
	return (0);
}
