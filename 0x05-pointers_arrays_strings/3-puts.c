#include <stdio.h>
#include "main.h"
/**
* _puts - prints on a new line
* @str: param
* Return: 0
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
