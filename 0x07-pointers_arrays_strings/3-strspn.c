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
	int i, j, x;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			x = 0;
			if (s[i] == accept[j])
			{
				x = 1;
				num++;
				break;
			}
		}
		if (x == 1)
		continue;
		else
		break;
	}
	return (num);
}
