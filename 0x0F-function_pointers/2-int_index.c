#include "function_pointers.h"
/**
* int_index - searches for index of a number in array
* @array: array of numbers
* @size: size of array
* @cmp: pointer to function that compares numbers
* Return: 0 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)

			return (i);
	}
	return (-1);
}
