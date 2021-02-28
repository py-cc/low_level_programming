#include <stdio.h>
#include "holberton.h"
/**
* main - Entry point
* @argc: size of argv
* @argv: size of command arguments
* Return: 0 Sucess
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
