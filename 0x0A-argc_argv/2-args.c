#include <stdio.h>
#include "holberton.h"
/**
* main - Entry point
* @argc: size of argv
* @argv: size of command arguments
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
