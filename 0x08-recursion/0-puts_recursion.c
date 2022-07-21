#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - prints strings followed by /n
* @s: char parameter
* Return: 0
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	_putchar('\');
}
