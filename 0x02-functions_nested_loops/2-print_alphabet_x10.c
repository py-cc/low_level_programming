#include "holberton.h"
/**
* print_alphabet_x10 - print alphabet ten times using my own function
*/

void print_alphabet_x10(void)
{

	int num;
	int a;

	for (num = 0; num < 10; num++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
