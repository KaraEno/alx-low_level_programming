#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - exclude certain numbers
* Return: 0
*/
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 51 && x != 53)
			_putchar(x);
	}
	_putchar('\n');
}
