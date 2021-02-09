#include "holberton.h"
/**
* print_alphabet_x10 - print alphabet ten times using my own function
*/

void print_alphabet_x10(void)
{

	int num;

	for (num = 0; num <= 10; num++)
	{
		print_alphabet();
	}

}

/**
* print_alphabet - print alphabet in lowercase
*
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
