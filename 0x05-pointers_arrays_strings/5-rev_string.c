#include "holberton.h"
/**
* rev_string - reverses a string
* @s: cheks pointer string
*
*/
void rev_string(char *s)
{
	int i, j;
	char temp[20];

	for (i = 0; s[i] != '\0'; i++);

	i = i-1;

	for (j = 0; j <= i; j++)
	{
		temp[j] = s[i];
		s[i] = s[j];
		s[j] = temp[j];
		i--;
	}
}
