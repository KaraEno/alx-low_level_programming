#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - create an array having the same char
 * @size: size of the array
 * @c: character assigned to array
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(arr) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	free(arr);
	return(arr);
}
