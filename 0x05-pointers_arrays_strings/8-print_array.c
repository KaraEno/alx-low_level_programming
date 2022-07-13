#include <stdio.h>
#include "main.h"
/**
* print_array - print array
* @a: parameter 1
* @n: parameter 2
* Return: 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	if (i > 0)
		printf(", ");
	printf("\n");
}

