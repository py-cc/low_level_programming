#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long long int sum = 0, num = 1;
	long long int  temp;
	int  i = 1;

	while (i < 50)
	{
		temp = sum;
		sum = sum + num;
		printf("%lld", sum);
		if (i != 49)
		{
			printf(",");
			printf(" ");
		}
		else if (i == 49)
		{
			printf("\n");
		}
		num = temp;
		i++;
	}
	return (0);
}
