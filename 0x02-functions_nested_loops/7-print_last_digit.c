#include "main.h"
/**
* print_last_digit - print last digit
* @c: arg for the function
* Return: Always 0
*/
int print_last_digit(int c)
{
	int x;

	if (c < 0)
		c *= -1;
	x = c % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
