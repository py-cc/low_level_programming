#include "holberton.h"
/**
* _atoi - convert a string to an integer
* @s: pointer to string check
* Return: integer convert
*/
int _atoi(char *s)
{
	unsigned int len, result = 0;
	int signo = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] == 45)
			signo++;
		else if (s[len] >= '0' && s[len] <= '9')
			result = result * 10 + s[len] - 48;
		else if (*s == '\0')
			return (0);
	}

	return (signo % 2 == 1 ? result = -result : result);
}
