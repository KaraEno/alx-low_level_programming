#include "function_pointers.h"
/**
* array_iterator - iterate array
* @array: array to be iterated
* @size: size of array
* @action: pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == NULL || action == NULL)
		return;

	for (; size > 0; size--)
		action(*array++);
}
