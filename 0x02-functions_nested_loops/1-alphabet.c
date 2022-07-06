#include "main.h"
/**
* main- entry point
* Description: 'write a letter'
* Return: Always return 0 (Success)
*/
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	return (0);
}
