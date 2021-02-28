#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: size of argv
* @argv: size of command arguments
*
* Return: 0 Success 1 If one of the number contains symbols that are not digits
*/
int main(int argc, char *argv[])
{
	int i, j, num = 0, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
