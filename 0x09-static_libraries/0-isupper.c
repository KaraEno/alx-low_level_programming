#include <stdio.h>
#include "main.h"
/**
* _isupper - only uppercase
* @c: parameter 1
* Return: 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
