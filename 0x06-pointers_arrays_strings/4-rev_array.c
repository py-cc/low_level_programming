#include "holberton.h"
/**
* reverse_array - function that reverses the content of an array of integers
* @a: pointer to array
* @n: size to array
*
*/
void reverse_array(int *a, int n)
{
	int temp, i;

	n = n - 1;

	for (i = 0; i <= n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
