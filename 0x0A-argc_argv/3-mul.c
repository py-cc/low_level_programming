#include <stdio.h>
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
		else if (result > 0)
			break;
		else if (*s == '\0')
			return (0);
	}

	return (signo % 2 == 1 ? result = -result : result);
}
/**
* main - Entry point
* @argc: size of argv
* @argv: size of command arguments
*
* Return: 0 Success of 1 If the program does not receive two arguments
*/
int main(int argc, char *argv[])
{

	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
	else
	{
		mult = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}
