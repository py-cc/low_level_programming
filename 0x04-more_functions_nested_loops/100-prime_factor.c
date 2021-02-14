#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long n = 612852475143;
	long prime;

	for (prime = 2; n > prime; prime++)
	{
		while (n % prime == 0)
		{
			n = n / prime;
		}
	}
	printf("%lu\n", prime);
	return (0);
}
