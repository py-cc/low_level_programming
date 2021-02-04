#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (success)
**/
int main(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (x = 1; x < 10; x++)
			{
				if (!(i < j && i < x))
				continue;
				if (j == x)
				continue;
				if (j > x)
				{
				continue;
				}
				else
				{
				putchar(i + '0');
				putchar(j + '0');
				putchar(x + '0');
				if (!(j == 8 && x == 9 && i == 7))
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
