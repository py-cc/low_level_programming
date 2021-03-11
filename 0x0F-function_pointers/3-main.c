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
	int num1, num2, calc;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' &&
		argv[2][0] != '*' && argv[2][0] != '/'
		&& argv[2][0] != '%') || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

		num1 = atoi(argv[1]);
		sign = argv[2];
		num2 = atoi(argv[3]);

		calc = get_op_func(sign)(num1, num2);
		printf("%d\n", calc);

		return (0);
}
