#include "main.h"
/**
* _abs- print the abs value
* @c: arg of function
* Return: 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
		return (c);
	else
		return (c * -1);
}
