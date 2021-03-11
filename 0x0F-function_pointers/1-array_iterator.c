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

	if (array != NULL && size != 0 && action != NULL)
	{
		unsigned int i; /* or size_t i <<< create type data unsigned int*/

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
