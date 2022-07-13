#include <stdio.h>
#include "main.h"
/**
* puts_half - prints half
* @str: parameter
* Return: 0
*/
void puts_half(char *str)
{
	int i, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		half = i / 2;
	}
	for (i = half - 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
