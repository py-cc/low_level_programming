#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Entry Point
* @argc: size of argv
* @argv: string of line command
*
* Return: 1 if the number of arguments passed to your program is not exactly 1,
* 0 Return Success
*/
int main(int argc, char *argv[])
{
	int num[] = {25, 10, 5, 2, 1};
	int i, count = 0, digit = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(*(argv + 1)) > 0)
	{
		digit = atoi(*(argv + 1));
	}
	if (digit > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (digit - num[i] == 0)
			{
				count++;
				break;
			}
			else if (digit - num[i] != 0 && digit >= 25)
			{
				digit = digit - num[i];
				i--;
				count++;
			}
			else if (!(digit - num[i] < 0))
			{
				digit = digit - num[i];
				count++;
			}
			else
			{
				continue;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
