#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program for calculating simple operations
* @argv: number arguments
* @argc: string commands lines
*
* Return: 0 Success
*/
int main(int argc, char *argv[])
{
	int calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	if (!get_op_func(argv[2]) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
}
