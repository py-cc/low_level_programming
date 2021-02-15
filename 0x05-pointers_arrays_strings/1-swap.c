#include "holberton.h"
/**
* swap_int - swap the values of two integers
* @a: check firts pointer number integer
* @b: check second pointer number integer
*/
void swap_int(int *a, int *b)
{

	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}
