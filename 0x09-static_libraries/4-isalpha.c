#include "main.h"
/**
* _isalpha- 'accept only letters'
* @c: argument in the function
* Return: Always 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
