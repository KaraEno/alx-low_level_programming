#include <stdio.h>
#include "main.h"
/**
*  _strlen_recursion - returns the length of a string
* @s: char parameter
* Return: 0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
	{
		return 1 + _strelen_recursion(s + 1);
	}
}
