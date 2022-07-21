#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - prints strings followed by /n
* @s: char parameter
* Return: 0
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
