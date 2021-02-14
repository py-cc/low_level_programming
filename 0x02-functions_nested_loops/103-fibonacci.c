#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int sum = 0, num = 0, num1 = 0, num2 = 1;

	while (num < 4000000)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
		if (num % 2 == 0)
		{
			sum = num + sum;
		}
	}
	printf("%d\n", sum);
	return (0);
}
