#include "function_pointers.h"
/**
* array_iterator - executes array with pointer to function with print
* @array: pointer to array
* @size: size to array
* @action: pointer to function with print
*
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (action != NULL && size != NULL && array != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
