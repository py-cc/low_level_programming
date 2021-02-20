#include "holberton.h"
/**
* rot13 - function that encodes a string using rot 13
* @s: pointer to string
*
* Return: pointer to char
*/
char *rot13(char *s)
{
	int i = 0;
	int j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = cod[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
