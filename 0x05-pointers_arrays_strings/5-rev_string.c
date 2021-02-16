#include "holberton.h"
/**
* rev_string - reverses a string
* @s: cheks pointer string
*
*/
void rev_string(char *s)
{
	int i, j, count = 0;
	char temp[20];

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	count = count - 1;

	for (j = 0; j <= count; j++)
	{
		temp[j] = s[count];
		s[count] = s[j];
		s[j] = temp[j];
		count--;
	}
}
