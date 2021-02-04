#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
**/
int main(void)
{
	char lower;
	char cap;
	for(lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for(cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
