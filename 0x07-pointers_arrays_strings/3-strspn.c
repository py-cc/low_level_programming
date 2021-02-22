#include "holberton.h"
/**
* _strspn - gets the legth of prefix substring
* @s: string evaluated
* @accept: bytes to compare
*
* Return: number of bytes in the initial segment of wich consist
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;
	unsigned int num = 0;

	for (len = 0; accept[len] != '\0'; len++)
	{
	}

	for (i = 0; i <= len && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
		}
	}
	return (num);
}
