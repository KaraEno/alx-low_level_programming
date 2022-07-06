#include "main.h"
/**
* main- entry point
* Description: 'print a to z 10 times'
* Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x < 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
