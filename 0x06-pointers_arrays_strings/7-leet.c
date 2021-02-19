#include "holberton.h"
/**
* leet - function that encodes a string into 1337 (leet code)
* @s: pointer to a string
*
* Return: pointer to string
*/
char *leet(char *x)
{
	int y = 0;
	char *end = x;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (*x)
	{
		for (y = 0; letters[y]; y++)
		{
			if (*x == letters[y])
			{
				*x = numbers[y];
			}
		}
		x++;
	}
	return (end);
}
