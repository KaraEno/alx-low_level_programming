#include <stdio.h>
#include "main.h"
/**
* _isdigit - checks number 0 through 9
* @c: parameter 1
* Return: 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
