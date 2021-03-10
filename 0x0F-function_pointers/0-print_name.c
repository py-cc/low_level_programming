#include "function_pointers.h"
/**
* print_name - functions that prints
* @name: character to print
* @f: pointer to function print text and evaluation
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' && f != '\0')
	{
		f(name);
	}
}
